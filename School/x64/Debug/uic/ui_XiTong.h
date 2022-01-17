/********************************************************************************
** Form generated from reading UI file 'XiTong.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XITONG_H
#define UI_XITONG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XiTong
{
public:
    QTabWidget *tabWidget;

    void setupUi(QWidget *XiTong)
    {
        if (XiTong->objectName().isEmpty())
            XiTong->setObjectName(QString::fromUtf8("XiTong"));
        XiTong->resize(1600, 900);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/School/Picture/tb.png"), QSize(), QIcon::Normal, QIcon::Off);
        XiTong->setWindowIcon(icon);
        XiTong->setStyleSheet(QString::fromUtf8("background-image: url(:/School/Picture/bk3.png);"));
        tabWidget = new QTabWidget(XiTong);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-4, -4, 1611, 921));
        tabWidget->setBaseSize(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);

        retranslateUi(XiTong);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(XiTong);
    } // setupUi

    void retranslateUi(QWidget *XiTong)
    {
        XiTong->setWindowTitle(QCoreApplication::translate("XiTong", "\346\240\241\345\233\255\345\257\273\350\267\257\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XiTong: public Ui_XiTong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XITONG_H
