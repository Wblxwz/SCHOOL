/********************************************************************************
** Form generated from reading UI file 'Xiugaimima.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIUGAIMIMA_H
#define UI_XIUGAIMIMA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Xiugaimima
{
public:
    QGridLayout *gridLayout;
    QPushButton *Wangji_Button;
    QLineEdit *Yhm_Line;
    QLineEdit *Mm_line;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Fanhui_Button;
    QPushButton *QueRen_Button;
    QLabel *label;
    QLineEdit *Wjmm_line;

    void setupUi(QWidget *Xiugaimima)
    {
        if (Xiugaimima->objectName().isEmpty())
            Xiugaimima->setObjectName(QString::fromUtf8("Xiugaimima"));
        Xiugaimima->resize(519, 339);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        Xiugaimima->setWindowIcon(icon);
        Xiugaimima->setStyleSheet(QString::fromUtf8("background-image: url(:/School/Picture/xgmm.png);"));
        gridLayout = new QGridLayout(Xiugaimima);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Wangji_Button = new QPushButton(Xiugaimima);
        Wangji_Button->setObjectName(QString::fromUtf8("Wangji_Button"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(14);
        Wangji_Button->setFont(font);

        gridLayout->addWidget(Wangji_Button, 3, 1, 1, 2);

        Yhm_Line = new QLineEdit(Xiugaimima);
        Yhm_Line->setObjectName(QString::fromUtf8("Yhm_Line"));
        Yhm_Line->setFont(font);

        gridLayout->addWidget(Yhm_Line, 0, 3, 1, 2);

        Mm_line = new QLineEdit(Xiugaimima);
        Mm_line->setObjectName(QString::fromUtf8("Mm_line"));
        Mm_line->setFont(font);
        Mm_line->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(Mm_line, 1, 3, 1, 2);

        label_2 = new QLabel(Xiugaimima);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 3);

        label_3 = new QLabel(Xiugaimima);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        Fanhui_Button = new QPushButton(Xiugaimima);
        Fanhui_Button->setObjectName(QString::fromUtf8("Fanhui_Button"));
        Fanhui_Button->setFont(font);

        gridLayout->addWidget(Fanhui_Button, 3, 0, 1, 1);

        QueRen_Button = new QPushButton(Xiugaimima);
        QueRen_Button->setObjectName(QString::fromUtf8("QueRen_Button"));
        QueRen_Button->setFont(font);

        gridLayout->addWidget(QueRen_Button, 3, 4, 1, 1);

        label = new QLabel(Xiugaimima);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        Wjmm_line = new QLineEdit(Xiugaimima);
        Wjmm_line->setObjectName(QString::fromUtf8("Wjmm_line"));
        Wjmm_line->setEnabled(true);
        Wjmm_line->setFont(font);
        Wjmm_line->setReadOnly(true);

        gridLayout->addWidget(Wjmm_line, 2, 2, 1, 3);


        retranslateUi(Xiugaimima);

        QMetaObject::connectSlotsByName(Xiugaimima);
    } // setupUi

    void retranslateUi(QWidget *Xiugaimima)
    {
        Xiugaimima->setWindowTitle(QCoreApplication::translate("Xiugaimima", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        Wangji_Button->setText(QCoreApplication::translate("Xiugaimima", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Xiugaimima", "\350\257\267\350\276\223\345\205\245\344\277\256\346\224\271\347\232\204\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Xiugaimima", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        Fanhui_Button->setText(QCoreApplication::translate("Xiugaimima", "\350\277\224\345\233\236", nullptr));
        QueRen_Button->setText(QCoreApplication::translate("Xiugaimima", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("Xiugaimima", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Xiugaimima: public Ui_Xiugaimima {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIUGAIMIMA_H
