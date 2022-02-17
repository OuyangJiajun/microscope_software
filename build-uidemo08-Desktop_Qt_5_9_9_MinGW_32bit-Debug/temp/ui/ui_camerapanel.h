/********************************************************************************
** Form generated from reading UI file 'camerapanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAPANEL_H
#define UI_CAMERAPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraPanel
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_connect;
    QToolButton *toolButton_snap;
    QToolButton *toolButton_video;
    QWidget *widget_2;

    void setupUi(QWidget *CameraPanel)
    {
        if (CameraPanel->objectName().isEmpty())
            CameraPanel->setObjectName(QStringLiteral("CameraPanel"));
        CameraPanel->resize(400, 300);
        widget = new QWidget(CameraPanel);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 219, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton_connect = new QToolButton(widget);
        toolButton_connect->setObjectName(QStringLiteral("toolButton_connect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/status_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_connect->setIcon(icon);
        toolButton_connect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_connect);

        toolButton_snap = new QToolButton(widget);
        toolButton_snap->setObjectName(QStringLiteral("toolButton_snap"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/snap.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_snap->setIcon(icon1);
        toolButton_snap->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_snap);

        toolButton_video = new QToolButton(widget);
        toolButton_video->setObjectName(QStringLiteral("toolButton_video"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/video.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_video->setIcon(icon2);
        toolButton_video->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_video);

        widget_2 = new QWidget(CameraPanel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(120, 60, 201, 141));

        retranslateUi(CameraPanel);

        QMetaObject::connectSlotsByName(CameraPanel);
    } // setupUi

    void retranslateUi(QWidget *CameraPanel)
    {
        CameraPanel->setWindowTitle(QApplication::translate("CameraPanel", "Form", Q_NULLPTR));
        toolButton_connect->setText(QApplication::translate("CameraPanel", "\350\277\236\346\216\245", Q_NULLPTR));
        toolButton_snap->setText(QApplication::translate("CameraPanel", "\346\213\215\347\205\247", Q_NULLPTR));
        toolButton_video->setText(QApplication::translate("CameraPanel", "\345\275\225\345\203\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CameraPanel: public Ui_CameraPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAPANEL_H
