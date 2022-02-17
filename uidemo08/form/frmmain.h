#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>

class QAbstractButton;

namespace Ui {
class frmMain;
}

class frmMain : public QWidget
{
    Q_OBJECT

public:
    explicit frmMain(QWidget *parent = 0);
    ~frmMain();

protected:
    bool eventFilter(QObject *watched, QEvent *event);//事件过滤器用于双击标题最大化窗口

private:
    Ui::frmMain *ui;

    QList<int> iconsMain;//主界面左菜单按钮图标
    QList<QAbstractButton *> btnsMain;//主界面左菜单按钮

    QList<int> iconsConfig;//设置界面左菜单按钮图标
    QList<QAbstractButton *> btnsConfig;//设置界面左菜单按钮

private:
    //根据QSS样式获取对应颜色值
    QString borderColor;
    QString normalBgColor;
    QString darkBgColor;
    QString normalTextColor;
    QString darkTextColor;

    void getQssColor(const QString &qss, const QString &flag, QString &color);
    void getQssColor(const QString &qss, QString &textColor,
                     QString &panelColor, QString &borderColor,
                     QString &normalColorStart, QString &normalColorEnd,
                     QString &darkColorStart, QString &darkColorEnd,
                     QString &highColor);

private slots:
    void initForm();//初始化顶部导航布局
    void initStyle();//初始化颜色样式
    void buttonClick();//点击顶部按钮切换界面
    void on_btnMenu_Min_clicked();//最小化槽函数
    void on_btnMenu_Max_clicked();//最大化槽函数
    void on_btnMenu_Close_clicked();//退出槽函数
    void initLeftMain();//初始化主界面左菜单
    void leftMainClick();//主界面左菜单槽函数
    void initLightSource();//初始化主界面光源部分
    void initStage();//初始化主界面位移台部分
    void initCamera();//初始化主界面相机部分
    void initLeftConfig();//初始化设置界面左菜单
    void leftConfigClick();//设置界面左菜单槽函数
};

#endif // FRMMAIN_H
