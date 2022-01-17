/********************************************************************************
** Form generated from reading UI file 'ZhuceJiemian.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCEJIEMIAN_H
#define UI_ZHUCEJIEMIAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhuceJiemian
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *Mm_label;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *Mm_lineEdit;
    QLabel *YHM_label;
    QLineEdit *YHM_lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Zhuce_Button;
    QSpacerItem *horizontalSpacer;
    QPushButton *FanHui_Button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ZhuceJiemian)
    {
        if (ZhuceJiemian->objectName().isEmpty())
            ZhuceJiemian->setObjectName(QString::fromUtf8("ZhuceJiemian"));
        ZhuceJiemian->resize(519, 339);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZhuceJiemian->setWindowIcon(icon);
        ZhuceJiemian->setStyleSheet(QString::fromUtf8("background-image: url(:/School/Picture/zc.png);"));
        gridLayout_3 = new QGridLayout(ZhuceJiemian);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(ZhuceJiemian);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Mm_label = new QLabel(widget);
        Mm_label->setObjectName(QString::fromUtf8("Mm_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        Mm_label->setFont(font);

        gridLayout->addWidget(Mm_label, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        Mm_lineEdit = new QLineEdit(widget);
        Mm_lineEdit->setObjectName(QString::fromUtf8("Mm_lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        Mm_lineEdit->setFont(font1);
        Mm_lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(Mm_lineEdit, 3, 2, 1, 1);

        YHM_label = new QLabel(widget);
        YHM_label->setObjectName(QString::fromUtf8("YHM_label"));
        YHM_label->setFont(font);

        gridLayout->addWidget(YHM_label, 1, 1, 1, 1);

        YHM_lineEdit = new QLineEdit(widget);
        YHM_lineEdit->setObjectName(QString::fromUtf8("YHM_lineEdit"));
        YHM_lineEdit->setFont(font1);

        gridLayout->addWidget(YHM_lineEdit, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(ZhuceJiemian);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Zhuce_Button = new QPushButton(widget_2);
        Zhuce_Button->setObjectName(QString::fromUtf8("Zhuce_Button"));
        Zhuce_Button->setFont(font);

        gridLayout_2->addWidget(Zhuce_Button, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        FanHui_Button = new QPushButton(widget_2);
        FanHui_Button->setObjectName(QString::fromUtf8("FanHui_Button"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(12);
        FanHui_Button->setFont(font2);

        gridLayout_2->addWidget(FanHui_Button, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(ZhuceJiemian);

        QMetaObject::connectSlotsByName(ZhuceJiemian);
    } // setupUi

    void retranslateUi(QWidget *ZhuceJiemian)
    {
        ZhuceJiemian->setWindowTitle(QCoreApplication::translate("ZhuceJiemian", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        Mm_label->setText(QCoreApplication::translate("ZhuceJiemian", "\345\257\206\347\240\201\357\274\232", nullptr));
        YHM_label->setText(QCoreApplication::translate("ZhuceJiemian", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        Zhuce_Button->setText(QCoreApplication::translate("ZhuceJiemian", "\346\263\250\345\206\214", nullptr));
        FanHui_Button->setText(QCoreApplication::translate("ZhuceJiemian", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZhuceJiemian: public Ui_ZhuceJiemian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCEJIEMIAN_H
