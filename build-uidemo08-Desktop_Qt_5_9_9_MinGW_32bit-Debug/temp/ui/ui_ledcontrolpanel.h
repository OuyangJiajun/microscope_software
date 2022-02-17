/********************************************************************************
** Form generated from reading UI file 'ledcontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDCONTROLPANEL_H
#define UI_LEDCONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ledControlPanel
{
public:
    QWidget *widget_2;
    QLabel *label_1;
    QLineEdit *lineEdit_waveLength;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_current;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QLabel *label_6;
    QLineEdit *lineEdit_maxCurrent;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *ledControlPanel)
    {
        if (ledControlPanel->objectName().isEmpty())
            ledControlPanel->setObjectName(QStringLiteral("ledControlPanel"));
        ledControlPanel->resize(282, 115);
        ledControlPanel->setMinimumSize(QSize(282, 115));
        widget_2 = new QWidget(ledControlPanel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 271, 118));
        label_1 = new QLabel(widget_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(9, 9, 24, 16));
        lineEdit_waveLength = new QLineEdit(widget_2);
        lineEdit_waveLength->setObjectName(QStringLiteral("lineEdit_waveLength"));
        lineEdit_waveLength->setGeometry(QRect(63, 9, 62, 20));
        lineEdit_waveLength->setMaximumSize(QSize(133, 16777215));
        lineEdit_waveLength->setMaxLength(32767);
        lineEdit_waveLength->setFrame(true);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(131, 9, 16, 16));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 35, 24, 16));
        lineEdit_current = new QLineEdit(widget_2);
        lineEdit_current->setObjectName(QStringLiteral("lineEdit_current"));
        lineEdit_current->setGeometry(QRect(63, 35, 62, 20));
        lineEdit_current->setMaximumSize(QSize(133, 16777215));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(131, 35, 16, 16));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(131, 61, 16, 16));
        horizontalSlider = new QSlider(widget_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(149, 61, 111, 22));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(9, 89, 48, 16));
        lineEdit_maxCurrent = new QLineEdit(widget_2);
        lineEdit_maxCurrent->setObjectName(QStringLiteral("lineEdit_maxCurrent"));
        lineEdit_maxCurrent->setGeometry(QRect(63, 89, 62, 20));
        lineEdit_maxCurrent->setMaximumSize(QSize(133, 16777215));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(131, 89, 16, 16));
        doubleSpinBox = new QDoubleSpinBox(widget_2);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(63, 62, 62, 20));
        doubleSpinBox->setMaximum(100);

        retranslateUi(ledControlPanel);

        QMetaObject::connectSlotsByName(ledControlPanel);
    } // setupUi

    void retranslateUi(QWidget *ledControlPanel)
    {
        ledControlPanel->setWindowTitle(QApplication::translate("ledControlPanel", "Form", Q_NULLPTR));
        label_1->setText(QApplication::translate("ledControlPanel", "\346\263\242\351\225\277", Q_NULLPTR));
        label_2->setText(QApplication::translate("ledControlPanel", "nm", Q_NULLPTR));
        label_3->setText(QApplication::translate("ledControlPanel", "\347\224\265\346\265\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("ledControlPanel", "mA", Q_NULLPTR));
        label_5->setText(QApplication::translate("ledControlPanel", "%", Q_NULLPTR));
        label_6->setText(QApplication::translate("ledControlPanel", "\346\234\200\345\244\247\347\224\265\346\265\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("ledControlPanel", "mA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ledControlPanel: public Ui_ledControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDCONTROLPANEL_H
