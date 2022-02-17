#pragma execution_character_set("utf-8")

#include "frmmain.h"
#include "ui_frmmain.h"
#include "iconhelper.h"
#include "quihelper.h"

frmMain::frmMain(QWidget *parent) : QWidget(parent), ui(new Ui::frmMain)
{
    ui->setupUi(this);
    this->initForm();
    this->initStyle();
    this->initLeftMain();
    this->initLightSource();
    this->initStage();
    this->initLeftConfig();
}

frmMain::~frmMain()
{
    delete ui;
}

bool frmMain::eventFilter(QObject *watched, QEvent *event)//事件过滤器拦截
{
    if (watched == ui->widgetTitle) {//标题栏
        if (event->type() == QEvent::MouseButtonDblClick) {//双击
            on_btnMenu_Max_clicked();//最大化
        }
    }
    return QWidget::eventFilter(watched, event);
}

void frmMain::getQssColor(const QString &qss, const QString &flag, QString &color)
{
    int index = qss.indexOf(flag);
    if (index >= 0) {
        color = qss.mid(index + flag.length(), 7);
    }
    //qDebug() << TIMEMS << flag << color;
}

void frmMain::getQssColor(const QString &qss, QString &textColor, QString &panelColor,
                          QString &borderColor, QString &normalColorStart, QString &normalColorEnd,
                          QString &darkColorStart, QString &darkColorEnd, QString &highColor)
{
    getQssColor(qss, "TextColor:", textColor);
    getQssColor(qss, "PanelColor:", panelColor);
    getQssColor(qss, "BorderColor:", borderColor);
    getQssColor(qss, "NormalColorStart:", normalColorStart);
    getQssColor(qss, "NormalColorEnd:", normalColorEnd);
    getQssColor(qss, "DarkColorStart:", darkColorStart);
    getQssColor(qss, "DarkColorEnd:", darkColorEnd);
    getQssColor(qss, "HighColor:", highColor);
}

void frmMain::initForm()//初始化顶部导航布局
{
    //设置无边框
    QUIHelper::setFramelessForm(this);
    //设置图标
    //IconHelper::setIcon(ui->labIco, 0xf073, 30);
    ui->labIco->setPixmap(QPixmap(":/image/K_logo_small.png"));//凯佳商标
    setWindowIcon(QIcon(":/image/K_windowIcon.png"));//任务栏图标改为凯佳商标
    IconHelper::setIcon(ui->btnMenu_Min, 0xf068);
    IconHelper::setIcon(ui->btnMenu_Max, 0xf067);
    IconHelper::setIcon(ui->btnMenu_Close, 0xf00d);

    //ui->widgetMenu->setVisible(false);
    ui->widgetTitle->setProperty("form", "title");
    //关联事件过滤器用于双击放大
    ui->widgetTitle->installEventFilter(this);
    ui->widgetTop->setProperty("nav", "top");

    //设置软件上方标题与窗口标题
    QFont font;
    font.setPixelSize(25);//以像素的方式来设置字体大小，实现设备无关
    ui->labTitle->setFont(font);
    ui->labTitle->setText("KAYJA MICROSCOPE");
    this->setWindowTitle(ui->labTitle->text());

    ui->stackedWidget->setStyleSheet("QLabel{font:60px;}");

    QSize icoSize(32, 32);
    int icoWidth = 85;

    //设置顶部导航按钮
    QList<QAbstractButton *> tbtns = ui->widgetTop->findChildren<QAbstractButton *>();
    foreach (QAbstractButton *btn, tbtns) {
        btn->setIconSize(icoSize);
        btn->setMinimumWidth(icoWidth);
        btn->setCheckable(true);
        connect(btn, SIGNAL(clicked()), this, SLOT(buttonClick()));//绑定下面的顶部导航栏切换对应界面函数
    }

    ui->btnMain->click();//一打开自动切换到主界面

    ui->widgetLeftMain->setProperty("flag", "left");
    ui->widgetLeftConfig->setProperty("flag", "left");
    ui->page1->setStyleSheet(QString("QWidget[flag=\"left\"] QAbstractButton{min-height:%1px;max-height:%1px;}").arg(60));
    ui->page2->setStyleSheet(QString("QWidget[flag=\"left\"] QAbstractButton{min-height:%1px;max-height:%1px;}").arg(25));
}

void frmMain::initStyle()//初始化颜色样式
{
    //加载样式表
    QString qss;
    QFile file(":/qss/blacksoft.css");
    if (file.open(QFile::ReadOnly)) {
        qss = QLatin1String(file.readAll());
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(paletteColor));
        qApp->setStyleSheet(qss);
        file.close();
    }

    //先从样式表中取出对应的颜色
    QString textColor, panelColor, borderColor, normalColorStart, normalColorEnd, darkColorStart, darkColorEnd, highColor;
    getQssColor(qss, textColor, panelColor, borderColor, normalColorStart, normalColorEnd, darkColorStart, darkColorEnd, highColor);

    //将对应颜色设置到控件
    this->borderColor = highColor;
    this->normalBgColor = normalColorStart;
    this->darkBgColor = panelColor;
    this->normalTextColor = textColor;
    this->darkTextColor = normalTextColor;
}

void frmMain::buttonClick()//点击顶部按钮切换界面
{
    QAbstractButton *b = (QAbstractButton *)sender();
    QString name = b->text();

    QList<QAbstractButton *> tbtns = ui->widgetTop->findChildren<QAbstractButton *>();
    foreach (QAbstractButton *btn, tbtns) {
        btn->setChecked(btn == b);
    }

    if (name == "主界面") {
        ui->stackedWidget->setCurrentIndex(0);
    } else if (name == "图像") {
        ui->stackedWidget->setCurrentIndex(1);
    } else if (name == "连接") {
        ui->stackedWidget->setCurrentIndex(2);
    } else if (name == "设置") {
        ui->stackedWidget->setCurrentIndex(3);
    } else if (name == "帮助") {
        ui->stackedWidget->setCurrentIndex(4);
    }
}

void frmMain::on_btnMenu_Min_clicked()//最小化按钮槽函数
{
    showMinimized();
}

void frmMain::on_btnMenu_Max_clicked()//最大化按钮槽函数
{
    static bool max = false;
    static QRect location = this->geometry();

    if (max) {
        this->setGeometry(location);
    } else {
        location = this->geometry();
        this->setGeometry(QUIHelper::getScreenRect());
    }

    this->setProperty("canMove", max);
    max = !max;
}

void frmMain::on_btnMenu_Close_clicked()//关闭按钮槽函数
{
    //应该要询问是否保存当前配置，保存采集和处理后的图片
    close();
}

void frmMain::initLeftMain()//初始化主界面左菜单
{
    iconsMain << 0xf0eb << 0xf047 << 0xf030<< 0xf10c<< 0xf0f6;//按钮图标编号list
    btnsMain << ui->tbtnMain1 << ui->tbtnMain2 << ui->tbtnMain3 << ui->tbtnMain4 << ui->tbtnMain5;//按钮list

    int count = btnsMain.count();
    for (int i = 0; i < count; i++) {//对每个按钮进行设置
        QToolButton *btn = (QToolButton *)btnsMain.at(i);
        btn->setCheckable(true);//设置可以勾选
        btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);//设置字体在图标下
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(leftMainClick()));//每个按钮点击绑定槽函数
    }

    IconHelper::StyleColor styleColor;
    styleColor.position = "left";
    styleColor.iconSize = 18;
    styleColor.iconWidth = 35;
    styleColor.iconHeight = 25;
    styleColor.borderWidth = 4;
    styleColor.borderColor = borderColor;
    styleColor.setColor(normalBgColor, normalTextColor, darkBgColor, darkTextColor);
    IconHelper::setStyle(ui->widgetLeftMain, btnsMain, iconsMain, styleColor);//把编号对应图标设置给按钮
    ui->tbtnMain1->click();//初始化时切换到主界面左菜单第一项
}

void frmMain::leftMainClick()//主界面左菜单槽函数
{
    QAbstractButton *b = (QAbstractButton *)sender();
    QString name = b->text();

    int count = btnsMain.count();
    for (int i = 0; i < count; i++) {//对主界面所有按钮
        QAbstractButton *btn = btnsMain.at(i);
        btn->setChecked(btn == b);//把相应的按钮setchecked，表示已经选中
    }
    if (name == "光源") {
        ui->stackedWidget_main->setCurrentIndex(0);
    } else if (name == "位移台") {
        ui->stackedWidget_main->setCurrentIndex(1);
    } else if (name == "相机") {
        ui->stackedWidget_main->setCurrentIndex(2);
    } else if (name == "显微镜") {
        ui->stackedWidget_main->setCurrentIndex(3);
    } else if (name == "自定义采集") {
        ui->stackedWidget_main->setCurrentIndex(4);
    }
}

void frmMain::initLightSource()//初始化主界面光源部分
{
    ui->label_chooseChannelNum->setStyleSheet("font-size : 20px");
    ui->label_chooseChannelNum->setText("请选择通道数：");
    ui->stackedWidget_LedChannel->setCurrentIndex(0);//一打开设置为双通道
    connect(ui->comboBox_chooseChannelNum,static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged),[=](){//这里的信号参照了帮助文档的写法
        if(ui->comboBox_chooseChannelNum->currentIndex()==0)ui->stackedWidget_LedChannel->setCurrentIndex(0);
        else if(ui->comboBox_chooseChannelNum->currentIndex()==1)ui->stackedWidget_LedChannel->setCurrentIndex(1);
        else if(ui->comboBox_chooseChannelNum->currentIndex()==2)ui->stackedWidget_LedChannel->setCurrentIndex(2);
        else if(ui->comboBox_chooseChannelNum->currentIndex()==3)ui->stackedWidget_LedChannel->setCurrentIndex(3);
    });

}

void frmMain::initStage()//初始化主界面位移台部分
{
    //复位

}

void frmMain::initCamera()//初始化主界面相机部分
{

}

void frmMain::initLeftConfig()//初始化设置界面左菜单
{
    iconsConfig << 0xf031 << 0xf036 << 0xf249 << 0xf055 << 0xf05a << 0xf249;//图标编号list
    btnsConfig << ui->tbtnConfig1 << ui->tbtnConfig2 << ui->tbtnConfig3 << ui->tbtnConfig4 << ui->tbtnConfig5 << ui->tbtnConfig6;//toolbutton list

    int count = btnsConfig.count();
    for (int i = 0; i < count; i++) {
        QToolButton *btn = (QToolButton *)btnsConfig.at(i);
        btn->setCheckable(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(leftConfigClick()));
    }

    IconHelper::StyleColor styleColor;
    styleColor.position = "left";
    styleColor.iconSize = 16;
    styleColor.iconWidth = 20;
    styleColor.iconHeight = 20;
    styleColor.borderWidth = 3;
    styleColor.borderColor = borderColor;
    styleColor.setColor(normalBgColor, normalTextColor, darkBgColor, darkTextColor);
    IconHelper::setStyle(ui->widgetLeftConfig, btnsConfig, iconsConfig, styleColor);
    ui->tbtnConfig1->click();
}

void frmMain::leftConfigClick()//设置界面左菜单槽函数
{
    QToolButton *b = (QToolButton *)sender();
    QString name = b->text();

    int count = btnsConfig.count();
    for (int i = 0; i < count; i++) {
        QAbstractButton *btn = btnsConfig.at(i);
        btn->setChecked(btn == b);
    }

    ui->lab4->setText(name);
}
