/********************************************************************************
** Form generated from reading UI file 'School.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHOOL_H
#define UI_SCHOOL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SchoolClass
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *BiaoTI;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *Mm_lable_2;
    QSpacerItem *verticalSpacer;
    QLabel *YHM_lable;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ZhuCe_Button;
    QPushButton *DengLu_Button;
    QLineEdit *YHM_line;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *Mima_Line;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *Xgmm;

    void setupUi(QMainWindow *SchoolClass)
    {
        if (SchoolClass->objectName().isEmpty())
            SchoolClass->setObjectName(QString::fromUtf8("SchoolClass"));
        SchoolClass->resize(917, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        SchoolClass->setWindowIcon(icon);
        SchoolClass->setStyleSheet(QString::fromUtf8("background-image: url(:/School/Picture/dl.png);"));
        centralWidget = new QWidget(SchoolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 20, 891, 601));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BiaoTI = new QLabel(frame);
        BiaoTI->setObjectName(QString::fromUtf8("BiaoTI"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font.setPointSize(36);
        BiaoTI->setFont(font);

        gridLayout_2->addWidget(BiaoTI, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Mm_lable_2 = new QLabel(frame_2);
        Mm_lable_2->setObjectName(QString::fromUtf8("Mm_lable_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        Mm_lable_2->setFont(font1);

        gridLayout->addWidget(Mm_lable_2, 3, 1, 2, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        YHM_lable = new QLabel(frame_2);
        YHM_lable->setObjectName(QString::fromUtf8("YHM_lable"));
        YHM_lable->setFont(font1);

        gridLayout->addWidget(YHM_lable, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);

        ZhuCe_Button = new QPushButton(frame_2);
        ZhuCe_Button->setObjectName(QString::fromUtf8("ZhuCe_Button"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        ZhuCe_Button->setFont(font2);

        gridLayout->addWidget(ZhuCe_Button, 8, 1, 1, 1);

        DengLu_Button = new QPushButton(frame_2);
        DengLu_Button->setObjectName(QString::fromUtf8("DengLu_Button"));
        DengLu_Button->setFont(font2);

        gridLayout->addWidget(DengLu_Button, 8, 2, 1, 1);

        YHM_line = new QLineEdit(frame_2);
        YHM_line->setObjectName(QString::fromUtf8("YHM_line"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        YHM_line->setFont(font3);

        gridLayout->addWidget(YHM_line, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        Mima_Line = new QLineEdit(frame_2);
        Mima_Line->setObjectName(QString::fromUtf8("Mima_Line"));
        Mima_Line->setFont(font3);
        Mima_Line->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(Mima_Line, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 9, 2, 1, 1);

        Xgmm = new QPushButton(frame_2);
        Xgmm->setObjectName(QString::fromUtf8("Xgmm"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font4.setPointSize(14);
        Xgmm->setFont(font4);

        gridLayout->addWidget(Xgmm, 9, 1, 1, 1);


        gridLayout_2->addWidget(frame_2, 2, 0, 1, 3);

        SchoolClass->setCentralWidget(centralWidget);

        retranslateUi(SchoolClass);

        QMetaObject::connectSlotsByName(SchoolClass);
    } // setupUi

    void retranslateUi(QMainWindow *SchoolClass)
    {
        SchoolClass->setWindowTitle(QCoreApplication::translate("SchoolClass", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        BiaoTI->setText(QCoreApplication::translate("SchoolClass", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
        Mm_lable_2->setText(QCoreApplication::translate("SchoolClass", "\345\257\206\347\240\201\357\274\232", nullptr));
        YHM_lable->setText(QCoreApplication::translate("SchoolClass", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        ZhuCe_Button->setText(QCoreApplication::translate("SchoolClass", "\346\263\250\345\206\214", nullptr));
        DengLu_Button->setText(QCoreApplication::translate("SchoolClass", "\347\231\273\345\275\225", nullptr));
        YHM_line->setText(QString());
        Mima_Line->setText(QString());
        Xgmm->setText(QCoreApplication::translate("SchoolClass", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SchoolClass: public Ui_SchoolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHOOL_H
