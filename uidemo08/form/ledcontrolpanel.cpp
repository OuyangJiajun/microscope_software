#include "ledcontrolpanel.h"
#include "ui_ledcontrolpanel.h"
#include <QMessageBox>

ledControlPanel::ledControlPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ledControlPanel)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    //最大电流每次修改都保存下来维护
    connect(ui->lineEdit_maxCurrent,&QLineEdit::textChanged,[=](){
        //先判断是否小于0，小于0直接弹窗报错
        double tem=ui->lineEdit_maxCurrent->displayText().toDouble();
        if(tem<0)
        {
            //弹窗警告不能小于0，请重新输入
            QMessageBox::critical(this,"警告","最大电流值不能小于0，请重新输入");
            //清空最大电流这一栏
            ui->lineEdit_maxCurrent->setText("");
        }
        else
        {
            maxCurrent=ui->lineEdit_maxCurrent->displayText().toDouble();
            ui->horizontalSlider->setMaximum(maxCurrent);
        }
    });
    ui->lineEdit_maxCurrent->setText(QString::number(1000));//默认电流1000mA
    //修改电流同时改变百分比和横条
    connect(ui->lineEdit_current,&QLineEdit::textChanged,[=](){
        //先判断不能小于0也不能大于最大电流
        double tem=ui->lineEdit_current->displayText().toDouble();
        if(tem<0)
        {
            //弹窗警告不能小于0，请重新输入
            QMessageBox::critical(this,"警告","电流值不能小于0，请重新输入");
            //清空电流这一栏
            ui->lineEdit_current->setText("");
        }
        else if(tem>maxCurrent)
        {
            //弹窗警告不能大于最大电流，请重新输入
            QMessageBox::critical(this,"警告","电流值不能大于最大电流，请重新输入");
            //清空电流这一栏
            ui->lineEdit_current->setText("");
        }
        else
        {
            current=tem;//电流每次修改都保存下来维护
        }
        ui->horizontalSlider->setValue(current);
        ui->doubleSpinBox->setValue(current/maxCurrent*100);
    });
    //修改百分比同时改变电流和横条
    connect(ui->doubleSpinBox,&QSpinBox::editingFinished,[=](){
        current=(ui->doubleSpinBox->value())/100*maxCurrent;//百分比每次修改都转为电流保存下来维护
        ui->horizontalSlider->setValue(current);
        ui->lineEdit_current->setText(QString::number(current));
    });
    //修改横条同时改变百分比和电流
    connect(ui->horizontalSlider,&QSlider::valueChanged,[=](){
        current=ui->horizontalSlider->value();//横条每次修改都转为电流保存下来维护
        ui->doubleSpinBox->setValue(current/maxCurrent);
        ui->lineEdit_current->setText(QString::number(current));
    });

    //调整字体大小
    ui->label_1->setStyleSheet("font-size : 10px");
    ui->label_2->setStyleSheet("font-size : 10px");
    ui->label_3->setStyleSheet("font-size : 10px");
    ui->label_4->setStyleSheet("font-size : 10px");
    ui->label_5->setStyleSheet("font-size : 10px");
    ui->label_6->setStyleSheet("font-size : 10px");
    ui->label_7->setStyleSheet("font-size : 10px");
}

ledControlPanel::~ledControlPanel()
{
    delete ui;
}
