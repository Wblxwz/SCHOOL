/********************************************************************************
** Form generated from reading UI file 'tjdd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TJDD_H
#define UI_TJDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tjdd
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dd_x;
    QLineEdit *bian_lline;
    QPushButton *qd_button;
    QPushButton *fh_button;
    QLabel *label_3;
    QLineEdit *dd_y;
    QLabel *label_4;
    QLineEdit *dd_mc;

    void setupUi(QWidget *tjdd)
    {
        if (tjdd->objectName().isEmpty())
            tjdd->setObjectName(QString::fromUtf8("tjdd"));
        tjdd->resize(487, 357);
        label = new QLabel(tjdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 60, 31, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(tjdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 130, 141, 31));
        label_2->setFont(font);
        dd_x = new QLineEdit(tjdd);
        dd_x->setObjectName(QString::fromUtf8("dd_x"));
        dd_x->setGeometry(QRect(260, 70, 113, 20));
        dd_x->setFont(font);
        bian_lline = new QLineEdit(tjdd);
        bian_lline->setObjectName(QString::fromUtf8("bian_lline"));
        bian_lline->setGeometry(QRect(260, 140, 113, 20));
        bian_lline->setFont(font);
        qd_button = new QPushButton(tjdd);
        qd_button->setObjectName(QString::fromUtf8("qd_button"));
        qd_button->setGeometry(QRect(310, 287, 91, 31));
        qd_button->setFont(font);
        fh_button = new QPushButton(tjdd);
        fh_button->setObjectName(QString::fromUtf8("fh_button"));
        fh_button->setGeometry(QRect(100, 287, 101, 31));
        fh_button->setFont(font);
        label_3 = new QLabel(tjdd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 90, 21, 31));
        label_3->setFont(font);
        dd_y = new QLineEdit(tjdd);
        dd_y->setObjectName(QString::fromUtf8("dd_y"));
        dd_y->setGeometry(QRect(260, 100, 113, 20));
        dd_y->setFont(font);
        label_4 = new QLabel(tjdd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 20, 181, 31));
        label_4->setFont(font);
        dd_mc = new QLineEdit(tjdd);
        dd_mc->setObjectName(QString::fromUtf8("dd_mc"));
        dd_mc->setGeometry(QRect(260, 30, 113, 20));
        dd_mc->setFont(font);

        retranslateUi(tjdd);

        QMetaObject::connectSlotsByName(tjdd);
    } // setupUi

    void retranslateUi(QWidget *tjdd)
    {
        tjdd->setWindowTitle(QCoreApplication::translate("tjdd", "tjdd", nullptr));
        label->setText(QCoreApplication::translate("tjdd", "X\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("tjdd", "\347\233\270\345\205\263\350\201\224\347\232\204\350\276\271\357\274\232", nullptr));
        qd_button->setText(QCoreApplication::translate("tjdd", "\347\241\256\345\256\232", nullptr));
        fh_button->setText(QCoreApplication::translate("tjdd", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("tjdd", "Y:", nullptr));
        label_4->setText(QCoreApplication::translate("tjdd", "\346\267\273\345\212\240\347\232\204\351\241\266\347\202\271\345\220\215\347\247\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tjdd: public Ui_tjdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TJDD_H
