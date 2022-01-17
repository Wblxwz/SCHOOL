/********************************************************************************
** Form generated from reading UI file 'jianjie.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIANJIE_H
#define UI_JIANJIE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jianjie
{
public:
    QLabel *MC;
    QTextEdit *Jj_edit;
    QLabel *label;
    QPushButton *qd_button;
    QPushButton *fh_button;

    void setupUi(QWidget *jianjie)
    {
        if (jianjie->objectName().isEmpty())
            jianjie->setObjectName(QString::fromUtf8("jianjie"));
        jianjie->resize(492, 381);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        jianjie->setWindowIcon(icon);
        jianjie->setStyleSheet(QString::fromUtf8("background-image: url(:/School/Picture/jianjie.png);"));
        MC = new QLabel(jianjie);
        MC->setObjectName(QString::fromUtf8("MC"));
        MC->setGeometry(QRect(10, 20, 471, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(14);
        MC->setFont(font);
        Jj_edit = new QTextEdit(jianjie);
        Jj_edit->setObjectName(QString::fromUtf8("Jj_edit"));
        Jj_edit->setGeometry(QRect(140, 90, 321, 191));
        Jj_edit->setFont(font);
        label = new QLabel(jianjie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 150, 141, 71));
        label->setFont(font);
        qd_button = new QPushButton(jianjie);
        qd_button->setObjectName(QString::fromUtf8("qd_button"));
        qd_button->setGeometry(QRect(330, 327, 93, 31));
        qd_button->setFont(font);
        fh_button = new QPushButton(jianjie);
        fh_button->setObjectName(QString::fromUtf8("fh_button"));
        fh_button->setGeometry(QRect(60, 327, 93, 31));
        fh_button->setFont(font);

        retranslateUi(jianjie);

        QMetaObject::connectSlotsByName(jianjie);
    } // setupUi

    void retranslateUi(QWidget *jianjie)
    {
        jianjie->setWindowTitle(QCoreApplication::translate("jianjie", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        MC->setText(QString());
        label->setText(QCoreApplication::translate("jianjie", "\350\257\267\350\276\223\345\205\245\347\256\200\344\273\213\357\274\232", nullptr));
        qd_button->setText(QCoreApplication::translate("jianjie", "\347\241\256\345\256\232", nullptr));
        fh_button->setText(QCoreApplication::translate("jianjie", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jianjie: public Ui_jianjie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIANJIE_H
