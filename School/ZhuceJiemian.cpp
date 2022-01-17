#include "ZhuceJiemian.h"


ZhuceJiemian::ZhuceJiemian(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Connect();
	TouMing();
}

void ZhuCe(Ui::ZhuceJiemian& ui, ZhuceJiemian* Z, School* S)
{
	if (ui.YHM_lineEdit->text() == "" && ui.Mm_lineEdit->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("�������û��������룡"));
	else if (ui.YHM_lineEdit->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("�������û�����"));
	else if (ui.Mm_lineEdit->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("���������룡"));
	else if (ui.YHM_lineEdit->text().count() > 8 || ui.Mm_lineEdit->text().count() > 8)
		QMessageBox::critical(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("�û���������������8λ��"));
	else
	{
		QString yhm = ui.YHM_lineEdit->text();
		QString mm = ui.Mm_lineEdit->text();
		std::ofstream out("./user/user.txt");
		out << yhm.toStdString() << "\n" << mm.toStdString();
		QMessageBox::information(NULL, QString::fromLocal8Bit("У԰Ѱ·ϵͳ"), QString::fromLocal8Bit("ע��ɹ���"));
		zhuce = true;
		Z->close();
		S->show();
	}
}

void ZhuceJiemian::TouMing()
{
	ui.YHM_label->setAttribute(Qt::WA_TranslucentBackground);
	ui.Mm_label->setAttribute(Qt::WA_TranslucentBackground);
}

void ZhuceJiemian::FanHui()
{
	School* S = new School();
	//delete�Ż���
	S->setAttribute(Qt::WA_DeleteOnClose);
	S->show();
	this->close();
}

void ZhuceJiemian::Connect()
{
	School* S = new School();
	connect(ui.FanHui_Button, &QPushButton::clicked, this, &ZhuceJiemian::FanHui);
	connect(ui.Zhuce_Button, &QPushButton::clicked, this, [=]() {ZhuCe(ui, this, S); });
}