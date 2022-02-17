/********************************************************************************
** Form generated from reading UI file 'stagecontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGECONTROLPANEL_H
#define UI_STAGECONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StageControlPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_arrow;
    QGridLayout *gridLayout_2;
    QToolButton *arrow_doubleUp;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *arrow_up;
    QToolButton *setOrigin;
    QToolButton *arrow_down;
    QToolButton *arrow_right;
    QToolButton *arrow_left;
    QToolButton *arrow_rightAndUp;
    QToolButton *arrow_leftAndUp;
    QToolButton *arrow_leftAndDown;
    QToolButton *arrow_rightAndDown;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QToolButton *arrow_doubleRight;
    QSpacerItem *verticalSpacer_2;
    QToolButton *arrow_doubleDown;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *arrow_doubleLeft;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_6;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSlider *verticalSlider;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;

    void setupUi(QWidget *StageControlPanel)
    {
        if (StageControlPanel->objectName().isEmpty())
            StageControlPanel->setObjectName(QStringLiteral("StageControlPanel"));
        StageControlPanel->resize(448, 218);
        horizontalLayout = new QHBoxLayout(StageControlPanel);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_arrow = new QWidget(StageControlPanel);
        widget_arrow->setObjectName(QStringLiteral("widget_arrow"));
        widget_arrow->setMinimumSize(QSize(200, 200));
        widget_arrow->setMaximumSize(QSize(2000, 2000));
        gridLayout_2 = new QGridLayout(widget_arrow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        arrow_doubleUp = new QToolButton(widget_arrow);
        arrow_doubleUp->setObjectName(QStringLiteral("arrow_doubleUp"));
        arrow_doubleUp->setMinimumSize(QSize(25, 25));
        arrow_doubleUp->setMaximumSize(QSize(250, 250));

        gridLayout_2->addWidget(arrow_doubleUp, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 8, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 6, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 2);

        widget = new QWidget(widget_arrow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(300, 300));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        arrow_up = new QToolButton(widget);
        arrow_up->setObjectName(QStringLiteral("arrow_up"));
        arrow_up->setMinimumSize(QSize(25, 25));
        arrow_up->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_up, 0, 1, 1, 1);

        setOrigin = new QToolButton(widget);
        setOrigin->setObjectName(QStringLiteral("setOrigin"));
        setOrigin->setMinimumSize(QSize(25, 25));
        setOrigin->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(setOrigin, 1, 1, 1, 1);

        arrow_down = new QToolButton(widget);
        arrow_down->setObjectName(QStringLiteral("arrow_down"));
        arrow_down->setMinimumSize(QSize(25, 25));
        arrow_down->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_down, 2, 1, 1, 1);

        arrow_right = new QToolButton(widget);
        arrow_right->setObjectName(QStringLiteral("arrow_right"));
        arrow_right->setMinimumSize(QSize(25, 25));
        arrow_right->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_right, 1, 2, 1, 1);

        arrow_left = new QToolButton(widget);
        arrow_left->setObjectName(QStringLiteral("arrow_left"));
        arrow_left->setMinimumSize(QSize(25, 25));
        arrow_left->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_left, 1, 0, 1, 1);

        arrow_rightAndUp = new QToolButton(widget);
        arrow_rightAndUp->setObjectName(QStringLiteral("arrow_rightAndUp"));
        arrow_rightAndUp->setMinimumSize(QSize(25, 25));
        arrow_rightAndUp->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_rightAndUp, 0, 2, 1, 1);

        arrow_leftAndUp = new QToolButton(widget);
        arrow_leftAndUp->setObjectName(QStringLiteral("arrow_leftAndUp"));
        arrow_leftAndUp->setMinimumSize(QSize(25, 25));
        arrow_leftAndUp->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_leftAndUp, 0, 0, 1, 1);

        arrow_leftAndDown = new QToolButton(widget);
        arrow_leftAndDown->setObjectName(QStringLiteral("arrow_leftAndDown"));
        arrow_leftAndDown->setMinimumSize(QSize(25, 25));
        arrow_leftAndDown->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_leftAndDown, 2, 0, 1, 1);

        arrow_rightAndDown = new QToolButton(widget);
        arrow_rightAndDown->setObjectName(QStringLiteral("arrow_rightAndDown"));
        arrow_rightAndDown->setMinimumSize(QSize(25, 25));
        arrow_rightAndDown->setMaximumSize(QSize(250, 250));

        gridLayout->addWidget(arrow_rightAndDown, 2, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 1, 7, 3);

        verticalSpacer_4 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 7, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 4, 3, 1);

        arrow_doubleRight = new QToolButton(widget_arrow);
        arrow_doubleRight->setObjectName(QStringLiteral("arrow_doubleRight"));
        arrow_doubleRight->setMinimumSize(QSize(25, 25));
        arrow_doubleRight->setMaximumSize(QSize(250, 250));

        gridLayout_2->addWidget(arrow_doubleRight, 4, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        arrow_doubleDown = new QToolButton(widget_arrow);
        arrow_doubleDown->setObjectName(QStringLiteral("arrow_doubleDown"));
        arrow_doubleDown->setMinimumSize(QSize(25, 25));
        arrow_doubleDown->setMaximumSize(QSize(250, 250));

        gridLayout_2->addWidget(arrow_doubleDown, 8, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 8, 3, 1, 2);

        arrow_doubleLeft = new QToolButton(widget_arrow);
        arrow_doubleLeft->setObjectName(QStringLiteral("arrow_doubleLeft"));
        arrow_doubleLeft->setMinimumSize(QSize(25, 25));
        arrow_doubleLeft->setMaximumSize(QSize(250, 250));

        gridLayout_2->addWidget(arrow_doubleLeft, 4, 0, 1, 1);


        horizontalLayout->addWidget(widget_arrow);

        widget_2 = new QWidget(StageControlPanel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(100, 200));
        widget_2->setMaximumSize(QSize(1000, 2000));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer_6 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_6);

        horizontalSlider = new QSlider(widget_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(-57);
        horizontalSlider->setMaximum(57);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSpacer_5 = new QSpacerItem(79, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_5);

        verticalSpacer = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(StageControlPanel);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(100, 200));
        widget_3->setMaximumSize(QSize(1000, 2000));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSlider = new QSlider(widget_3);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setMinimum(-62);
        verticalSlider->setMaximum(64);
        verticalSlider->setValue(0);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider, 0, 2, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(21, 150, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 4, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 1, 2, 1, 2);


        horizontalLayout->addWidget(widget_3);


        retranslateUi(StageControlPanel);

        QMetaObject::connectSlotsByName(StageControlPanel);
    } // setupUi

    void retranslateUi(QWidget *StageControlPanel)
    {
        StageControlPanel->setWindowTitle(QApplication::translate("StageControlPanel", "Form", Q_NULLPTR));
        arrow_doubleUp->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_up->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        setOrigin->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_down->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_right->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_left->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_rightAndUp->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_leftAndUp->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_leftAndDown->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_rightAndDown->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_doubleRight->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_doubleDown->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        arrow_doubleLeft->setText(QApplication::translate("StageControlPanel", "...", Q_NULLPTR));
        label->setText(QApplication::translate("StageControlPanel", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("StageControlPanel", "Y", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StageControlPanel: public Ui_StageControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGECONTROLPANEL_H
