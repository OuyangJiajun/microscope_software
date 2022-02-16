#include "appinit.h"
#include "qmutex.h"
#include "qapplication.h"
#include "qevent.h"
#include "qwidget.h"

QScopedPointer<AppInit> AppInit::self;//存放指向AppInit的指针
AppInit *AppInit::Instance()//真正的构造函数，实例化AppInit对象并返回指针
{
    if (self.isNull()) {
        static QMutex mutex;//创建一个互斥对象mutex
        QMutexLocker locker(&mutex);//锁住mutex，其他线程无法再访问该区域的数据，确保self为空
        if (self.isNull()) {
            self.reset(new AppInit);//新建一个AppInit对象，self指向它
        }
    }

    return self.data();//返回指针self
}

AppInit::AppInit(QObject *parent) : QObject(parent)//空构造函数
{
}

bool AppInit::eventFilter(QObject *watched, QEvent *event)//事件过滤器实现拖动窗口
{
    QWidget *w = (QWidget *)watched;
    if (!w->property("canMove").toBool()) {//能移动再执行下面的移动命令，不能移动的直接returen
        return QObject::eventFilter(watched, event);
    }

    static QPoint mousePoint;//用来记录位置
    static bool mousePressed = false;

    QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
    if (mouseEvent->type() == QEvent::MouseButtonPress) {
        if (mouseEvent->button() == Qt::LeftButton) {//按下左键时
            mousePressed = true;
            mousePoint = mouseEvent->globalPos() - w->pos();//mousePoint首先记录当前窗口左上角的位置
        }
    } else if (mouseEvent->type() == QEvent::MouseButtonRelease) {
        mousePressed = false;
    } else if (mouseEvent->type() == QEvent::MouseMove) {
        if (mousePressed) {//鼠标移动过程中如果按下了左键
            w->move(mouseEvent->globalPos() - mousePoint);//此句作用：窗口左上角将移动到当前鼠标所在的位置
            return true;
        }
    }

    return QObject::eventFilter(watched, event);//其他情况return给父类
}

void AppInit::start()//安装事件过滤器
{
    qApp->installEventFilter(this);
}
