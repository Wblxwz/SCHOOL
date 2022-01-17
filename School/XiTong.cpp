#include "XiTong.h"

XiTong::XiTong(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

void XiTong::Init()
{
	this->setFixedSize(1600, 900);
	GuanYu* G = new GuanYu();
	ZhuJieMian* Z = new ZhuJieMian();
	DaoHang* D = new DaoHang();
	GuanLiYuan* GL = new GuanLiYuan();
	connect(Z->ui.GG_button, &QPushButton::clicked, this, &XiTong::BJ);
	//切换界面(优化)？
	ui.tabWidget->insertTab(0, Z, QString::fromLocal8Bit("主界面"));
	ui.tabWidget->insertTab(2, GL, QString::fromLocal8Bit("添加删除系统（管理员）"));
	ui.tabWidget->insertTab(1, D, QString::fromLocal8Bit("寻路系统"));
	ui.tabWidget->insertTab(3, G, QString::fromLocal8Bit("关于"));
	ui.tabWidget->tabBar()->setFixedWidth(1600);
	QFont Q;
	Q.setFamily("方正粗黑宋简体");
	Q.setPixelSize(20);
	Q.setBold(true);
	ui.tabWidget->tabBar()->setFont(Q);
}

void XiTong::BJ()
{
	switch (index)
	{
	case 0:
		this->setStyleSheet("background-image: url(:/School/Picture/bk1.png);");
		break;
	case 1:
		this->setStyleSheet("background-image: url(:/School/Picture/bk2.png);");
		break;
	case 2:
		this->setStyleSheet("background-image: url(:/School/Picture/bk3.png);");
		break;
	default:
		break;
	}
}

