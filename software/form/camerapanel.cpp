#include "camerapanel.h"
#include "ui_camerapanel.h"

CameraPanel::CameraPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraPanel)
{
    ui->setupUi(this);

        connect(ui->toolButton_connect,&QToolButton::clicked,[=](){
            //先判断相机开关
            if(flag_camera==true)
            {
                //发送关闭相机指令


                //确认关闭后flag改为关闭
                flag_camera=false;

                //按钮变为关闭状态
                ui->toolButton_connect->setIcon(QIcon(":/image/status_close.png"));
                ui->toolButton_connect->setText("连接");
            }
            else
            {
                //发送打开相机指令


                //确认打开后flag改为打开
                flag_camera=true;

                //按钮变为打开状态
                ui->toolButton_connect->setIcon(QIcon(":/image/status_open.png"));
                ui->toolButton_connect->setText("断开");
            }
        });

        connect(ui->toolButton_video,&QToolButton::clicked,[=](){
            //先判断是否正在录像
            if(flag_video==true)
            {
                //发送停止录像指令，确认停止后


                //flag改为没有在录像
                flag_video=false;

                //按钮变为录像
                ui->toolButton_video->setIcon(QIcon(":/image/video.png"));
                ui->toolButton_video->setText("录像");
            }
            else
            {
                //发送开始录像指令，确认开始后


                //flag改为正在录像
                flag_video=true;

                //按钮变为停止
                ui->toolButton_video->setIcon(QIcon(":/image/stopVideo.png"));
                ui->toolButton_video->setText("停止");
            }
        });
}

CameraPanel::~CameraPanel()
{
    delete ui;
}
