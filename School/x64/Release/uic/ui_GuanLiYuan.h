/********************************************************************************
** Form generated from reading UI file 'GuanLiYuan.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUANLIYUAN_H
#define UI_GUANLIYUAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuanLiYuan
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *CurrentYH;
    QListView *Jianjie;
    QPushButton *xg_Button;

    void setupUi(QWidget *GuanLiYuan)
    {
        if (GuanLiYuan->objectName().isEmpty())
            GuanLiYuan->setObjectName(QString::fromUtf8("GuanLiYuan"));
        GuanLiYuan->resize(1600, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        GuanLiYuan->setWindowIcon(icon);
        label = new QLabel(GuanLiYuan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 0, 451, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        widget = new QWidget(GuanLiYuan);
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

        Jianjie = new QListView(GuanLiYuan);
        Jianjie->setObjectName(QString::fromUtf8("Jianjie"));
        Jianjie->setGeometry(QRect(1200, 150, 391, 271));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(14);
        Jianjie->setFont(font2);
        Jianjie->setEditTriggers(QAbstractItemView::NoEditTriggers);
        xg_Button = new QPushButton(GuanLiYuan);
        xg_Button->setObjectName(QString::fromUtf8("xg_Button"));
        xg_Button->setGeometry(QRect(1360, 470, 101, 41));
        xg_Button->setFont(font2);

        retranslateUi(GuanLiYuan);

        QMetaObject::connectSlotsByName(GuanLiYuan);
    } // setupUi

    void retranslateUi(QWidget *GuanLiYuan)
    {
        GuanLiYuan->setWindowTitle(QCoreApplication::translate("GuanLiYuan", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("GuanLiYuan", "\346\267\273\345\212\240\345\210\240\351\231\244\347\263\273\347\273\237\357\274\210\347\256\241\347\220\206\345\221\230\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("GuanLiYuan", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
        CurrentYH->setText(QString());
        xg_Button->setText(QCoreApplication::translate("GuanLiYuan", "\344\277\256\346\224\271\347\256\200\344\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuanLiYuan: public Ui_GuanLiYuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUANLIYUAN_H
