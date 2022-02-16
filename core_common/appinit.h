#ifndef APPINIT_H
#define APPINIT_H

#include <QObject>

class AppInit : public QObject
{
    Q_OBJECT
public:
    static AppInit *Instance();//真正的构造函数，实例化AppInit对象并返回指针
    explicit AppInit(QObject *parent = 0);//空构造函数

protected:
    bool eventFilter(QObject *watched, QEvent *event);//事件过滤器实现拖动窗口

private:
    static QScopedPointer<AppInit> self;//存放指向AppInit的指针

public slots:
    void start();//安装事件过滤器
};

#endif // APPINIT_H
