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
	//�л�����(�Ż�)��
	ui.tabWidget->insertTab(0, Z, QString::fromLocal8Bit("������"));
	ui.tabWidget->insertTab(2, GL, QString::fromLocal8Bit("���ɾ��ϵͳ������Ա��"));
	ui.tabWidget->insertTab(1, D, QString::fromLocal8Bit("Ѱ·ϵͳ"));
	ui.tabWidget->insertTab(3, G, QString::fromLocal8Bit("����"));
	ui.tabWidget->tabBar()->setFixedWidth(1600);
	QFont Q;
	Q.setFamily("�����ֺ��μ���");
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

