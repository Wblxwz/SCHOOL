#include "GuanYu.h"

GuanYu::GuanYu(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(1600, 900);
	connect(ui.GuanYu_Button, &QPushButton::clicked, this, [=]() {QMessageBox::information(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("��ǰ�汾��0.9\nBy:ABM")); });
	TouMing();
}

void GuanYu::TouMing()
{
	if (!guanliyuan)
		ui.CurrentYH->setText(QString::fromStdString(yhm) + QString::fromLocal8Bit("����ͨ�û���"));
	else
		ui.CurrentYH->setText(QString::fromStdString("root") + QString::fromLocal8Bit("������Ա��"));
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.CurrentYH->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_4->setAttribute(Qt::WA_TranslucentBackground);
	ui.textBrowser->setAttribute(Qt::WA_TranslucentBackground);
	ui.GuanYu_Button->setAttribute(Qt::WA_TranslucentBackground);
}

GuanYu::~GuanYu()
{
}
