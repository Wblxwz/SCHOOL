#include "ZhuJieMian.h"

int index = 0;

ZhuJieMian::ZhuJieMian(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(1600, 900);
	connect(ui.GG_button, &QPushButton::clicked, this, &ZhuJieMian::GengGai);
	if (!guanliyuan)
		ui.CurrentYH->setText(QString::fromStdString(yhm) + QString::fromLocal8Bit("����ͨ�û���"));
	else
		ui.CurrentYH->setText(QString::fromStdString("root") + QString::fromLocal8Bit("������Ա��"));
	TouMing();
}

void ZhuJieMian::TouMing()
{
	ui.BJ->addItem(QString::fromLocal8Bit("��ɫʥ����"));
	ui.BJ->addItem(QString::fromLocal8Bit("�������"));
	ui.BJ->addItem("The King");
	ui.BJ->setCurrentIndex(2);
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.CurrentYH->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_3->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_5->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_4->setAttribute(Qt::WA_TranslucentBackground);
}

void ZhuJieMian::GengGai()
{
	index = ui.BJ->currentIndex();
}

ZhuJieMian::~ZhuJieMian()
{
}
