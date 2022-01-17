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
    QLineEdit *dd_line;
    QLineEdit *bian_lline;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *tjdd)
    {
        if (tjdd->objectName().isEmpty())
            tjdd->setObjectName(QString::fromUtf8("tjdd"));
        tjdd->resize(487, 357);
        label = new QLabel(tjdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(tjdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 130, 141, 31));
        label_2->setFont(font);
        dd_line = new QLineEdit(tjdd);
        dd_line->setObjectName(QString::fromUtf8("dd_line"));
        dd_line->setGeometry(QRect(260, 70, 113, 20));
        dd_line->setFont(font);
        bian_lline = new QLineEdit(tjdd);
        bian_lline->setObjectName(QString::fromUtf8("bian_lline"));
        bian_lline->setGeometry(QRect(260, 140, 113, 20));
        bian_lline->setFont(font);
        pushButton = new QPushButton(tjdd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 287, 91, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(tjdd);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 287, 101, 31));
        pushButton_2->setFont(font);

        retranslateUi(tjdd);

        QMetaObject::connectSlotsByName(tjdd);
    } // setupUi

    void retranslateUi(QWidget *tjdd)
    {
        tjdd->setWindowTitle(QCoreApplication::translate("tjdd", "tjdd", nullptr));
        label->setText(QCoreApplication::translate("tjdd", "\346\267\273\345\212\240\347\232\204\351\241\266\347\202\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("tjdd", "\347\233\270\345\205\263\350\201\224\347\232\204\350\276\271\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("tjdd", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tjdd", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tjdd: public Ui_tjdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TJDD_H
