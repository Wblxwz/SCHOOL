/********************************************************************************
** Form generated from reading UI file 'DaoHang.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAOHANG_H
#define UI_DAOHANG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DaoHang
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *ShengCheng;
    QComboBox *ZhongDian;
    QSpacerItem *verticalSpacer_3;
    QPushButton *YuYin_Button;
    QLabel *label_3;
    QComboBox *FangShi;
    QComboBox *QiDian;
    QLabel *label;
    QPushButton *TingZhi_Button;
    QTextEdit *DaoHang_Edit;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *CurrentYH;

    void setupUi(QWidget *DaoHang)
    {
        if (DaoHang->objectName().isEmpty())
            DaoHang->setObjectName(QString::fromUtf8("DaoHang"));
        DaoHang->resize(1600, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        DaoHang->setWindowIcon(icon);
        widget = new QWidget(DaoHang);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1100, 10, 491, 371));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 3, 1, 1);

        ShengCheng = new QPushButton(widget);
        ShengCheng->setObjectName(QString::fromUtf8("ShengCheng"));
        ShengCheng->setFont(font);

        gridLayout->addWidget(ShengCheng, 7, 3, 1, 1);

        ZhongDian = new QComboBox(widget);
        ZhongDian->setObjectName(QString::fromUtf8("ZhongDian"));
        ZhongDian->setFont(font);

        gridLayout->addWidget(ZhongDian, 5, 2, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 3, 1, 1);

        YuYin_Button = new QPushButton(widget);
        YuYin_Button->setObjectName(QString::fromUtf8("YuYin_Button"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(14);
        YuYin_Button->setFont(font1);

        gridLayout->addWidget(YuYin_Button, 7, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        FangShi = new QComboBox(widget);
        FangShi->setObjectName(QString::fromUtf8("FangShi"));
        FangShi->setFont(font);

        gridLayout->addWidget(FangShi, 7, 2, 1, 1);

        QiDian = new QComboBox(widget);
        QiDian->setObjectName(QString::fromUtf8("QiDian"));
        QiDian->setFont(font);

        gridLayout->addWidget(QiDian, 3, 2, 1, 3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 3, 1, 2);

        TingZhi_Button = new QPushButton(widget);
        TingZhi_Button->setObjectName(QString::fromUtf8("TingZhi_Button"));
        TingZhi_Button->setFont(font1);

        gridLayout->addWidget(TingZhi_Button, 7, 4, 1, 1);

        DaoHang_Edit = new QTextEdit(DaoHang);
        DaoHang_Edit->setObjectName(QString::fromUtf8("DaoHang_Edit"));
        DaoHang_Edit->setGeometry(QRect(1100, 320, 471, 451));
        DaoHang_Edit->setFont(font);
        DaoHang_Edit->setReadOnly(true);
        widget_2 = new QWidget(DaoHang);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(1210, 770, 331, 121));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        CurrentYH = new QLabel(widget_2);
        CurrentYH->setObjectName(QString::fromUtf8("CurrentYH"));
        CurrentYH->setFont(font);

        gridLayout_2->addWidget(CurrentYH, 0, 1, 1, 1);


        retranslateUi(DaoHang);

        QMetaObject::connectSlotsByName(DaoHang);
    } // setupUi

    void retranslateUi(QWidget *DaoHang)
    {
        DaoHang->setWindowTitle(QCoreApplication::translate("DaoHang", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("DaoHang", "\350\265\267\347\202\271\357\274\232", nullptr));
        ShengCheng->setText(QCoreApplication::translate("DaoHang", "\347\224\237\346\210\220", nullptr));
        YuYin_Button->setText(QCoreApplication::translate("DaoHang", "\350\257\255\351\237\263\346\222\255\346\212\245", nullptr));
        label_3->setText(QCoreApplication::translate("DaoHang", "\347\273\210\347\202\271\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("DaoHang", "\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        TingZhi_Button->setText(QCoreApplication::translate("DaoHang", "\345\201\234\346\255\242\346\222\255\346\212\245", nullptr));
        label_4->setText(QCoreApplication::translate("DaoHang", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
        CurrentYH->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DaoHang: public Ui_DaoHang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAOHANG_H
