#include "stagecontrolpanel.h"
#include "ui_stagecontrolpanel.h"

StageControlPanel::StageControlPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageControlPanel)
{
    ui->setupUi(this);
    //箭头图标
    ui->arrow_doubleUp->setIcon(QIcon(":/image/arrow_doubleup.png"));
    ui->arrow_doubleDown->setIcon(QIcon(":/image/arrow_doubledown.png"));
    ui->arrow_doubleLeft->setIcon(QIcon(":/image/arrow_doubleleft.png"));
    ui->arrow_doubleRight->setIcon(QIcon(":/image/arrow_doubleright.png"));
    ui->arrow_up->setIcon(QIcon(":/image/arrow_up.png"));
    ui->arrow_down->setIcon(QIcon(":/image/arrow_down.png"));
    ui->arrow_left->setIcon(QIcon(":/image/arrow_left.png"));
    ui->arrow_right->setIcon(QIcon(":/image/arrow_right.png"));
    ui->arrow_leftAndUp->setIcon(QIcon(":/image/arrow-up-left.png"));
    ui->arrow_leftAndDown->setIcon(QIcon(":/image/arrow-down-left.png"));
    ui->arrow_rightAndUp->setIcon(QIcon(":/image/arrow-up-right.png"));
    ui->arrow_rightAndDown->setIcon(QIcon(":/image/arrow-down-right.png"));
    ui->setOrigin->setIcon(QIcon(":/image/mark.png"));



}

StageControlPanel::~StageControlPanel()
{
    delete ui;
}
