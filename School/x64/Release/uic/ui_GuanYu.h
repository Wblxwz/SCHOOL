/********************************************************************************
** Form generated from reading UI file 'GuanYu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUANYU_H
#define UI_GUANYU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuanYu
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *CurrentYH;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QPushButton *GuanYu_Button;

    void setupUi(QWidget *GuanYu)
    {
        if (GuanYu->objectName().isEmpty())
            GuanYu->setObjectName(QString::fromUtf8("GuanYu"));
        GuanYu->resize(1600, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        GuanYu->setWindowIcon(icon);
        GuanYu->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(GuanYu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(760, 0, 91, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(GuanYu);
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

        label_4 = new QLabel(GuanYu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 820, 115, 29));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(14);
        label_4->setFont(font2);
        textBrowser = new QTextBrowser(GuanYu);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(470, 300, 671, 241));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font3.setPointSize(16);
        textBrowser->setFont(font3);
        GuanYu_Button = new QPushButton(GuanYu);
        GuanYu_Button->setObjectName(QString::fromUtf8("GuanYu_Button"));
        GuanYu_Button->setGeometry(QRect(0, 850, 101, 31));
        GuanYu_Button->setFont(font2);

        retranslateUi(GuanYu);

        QMetaObject::connectSlotsByName(GuanYu);
    } // setupUi

    void retranslateUi(QWidget *GuanYu)
    {
        GuanYu->setWindowTitle(QCoreApplication::translate("GuanYu", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("GuanYu", "\345\205\263\344\272\216", nullptr));
        label_2->setText(QCoreApplication::translate("GuanYu", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
        CurrentYH->setText(QString());
        label_4->setText(QCoreApplication::translate("GuanYu", "By:ABM", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("GuanYu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600;\">1.\347\224\250\346\210\267\344\277\241\346\201\257\345\255\230\345\202\250\344\272\216user\346\226\207\344\273\266\345\244\271\344\270\255\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600;\">2.\345\257\273\350\267\257\347"
                        "\263\273\347\273\237\344\275\277\347\224\250\345\271\263\351\235\242\345\234\260\345\233\276\357\274\214\350\267\257\345\276\204\344\270\216\347\202\271\346\234\252\345\256\214\345\205\250\344\270\216\350\267\257\345\220\273\345\220\210\357\274\214\345\255\230\345\234\250\350\257\257\345\267\256\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600;\">3.\345\257\273\350\267\257\347\263\273\347\273\237\344\275\277\347\224\250\345\274\227\346\264\233\344\274\212\345\276\267\347\256\227\346\263\225\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600;\">4.\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237\351\203\250\345\210\206\345\212\237\350\203\275"
                        "\346\232\202\346\234\252\345\256\236\347\216\260\343\200\202</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600;\">5.\346\236\204\351\200\240\351\202\273\346\216\245\347\237\251\351\230\265\347\232\204\346\225\260\346\215\256\345\234\250infile\346\226\207\344\273\266\345\244\271\344\270\255\343\200\202</span></p></body></html>", nullptr));
        GuanYu_Button->setText(QCoreApplication::translate("GuanYu", "\345\205\263\344\272\216\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuanYu: public Ui_GuanYu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUANYU_H
