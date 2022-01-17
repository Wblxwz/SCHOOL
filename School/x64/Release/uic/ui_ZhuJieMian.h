/********************************************************************************
** Form generated from reading UI file 'ZhuJieMian.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUJIEMIAN_H
#define UI_ZHUJIEMIAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZhuJieMian
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *CurrentYH;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *GG_button;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *BJ;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *ZhuJieMian)
    {
        if (ZhuJieMian->objectName().isEmpty())
            ZhuJieMian->setObjectName(QString::fromUtf8("ZhuJieMian"));
        ZhuJieMian->resize(1600, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZhuJieMian->setWindowIcon(icon);
        label = new QLabel(ZhuJieMian);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 0, 421, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        widget = new QWidget(ZhuJieMian);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1210, 770, 331, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        CurrentYH = new QLabel(widget);
        CurrentYH->setObjectName(QString::fromUtf8("CurrentYH"));
        CurrentYH->setFont(font1);

        gridLayout->addWidget(CurrentYH, 0, 1, 1, 1);

        widget_2 = new QWidget(ZhuJieMian);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(100, 220, 331, 321));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        GG_button = new QPushButton(widget_2);
        GG_button->setObjectName(QString::fromUtf8("GG_button"));
        GG_button->setFont(font1);

        gridLayout_2->addWidget(GG_button, 1, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        BJ = new QComboBox(widget_2);
        BJ->setObjectName(QString::fromUtf8("BJ"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        BJ->setFont(font2);

        gridLayout_2->addWidget(BJ, 0, 1, 1, 2);

        label_4 = new QLabel(ZhuJieMian);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 820, 115, 29));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_5 = new QLabel(ZhuJieMian);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(520, 90, 1001, 691));

        retranslateUi(ZhuJieMian);

        QMetaObject::connectSlotsByName(ZhuJieMian);
    } // setupUi

    void retranslateUi(QWidget *ZhuJieMian)
    {
        ZhuJieMian->setWindowTitle(QCoreApplication::translate("ZhuJieMian", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("ZhuJieMian", "\346\254\242\350\277\216\344\275\277\347\224\250\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("ZhuJieMian", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
        CurrentYH->setText(QString());
        GG_button->setText(QCoreApplication::translate("ZhuJieMian", "\346\233\264\346\224\271", nullptr));
        label_3->setText(QCoreApplication::translate("ZhuJieMian", "\345\275\223\345\211\215\350\203\214\346\231\257\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ZhuJieMian", "By:ABM", nullptr));
        label_5->setText(QCoreApplication::translate("ZhuJieMian", "<html><head/><body><p><img src=\":/School/Picture/zjm.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZhuJieMian: public Ui_ZhuJieMian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUJIEMIAN_H
