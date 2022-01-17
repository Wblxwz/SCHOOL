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
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名和密码！"));
	else if (ui.YHM_lineEdit->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名！"));
	else if (ui.Mm_lineEdit->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入密码！"));
	else if (ui.YHM_lineEdit->text().count() > 8 || ui.Mm_lineEdit->text().count() > 8)
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("用户名或密码错误（最多8位）"));
	else
	{
		QString yhm = ui.YHM_lineEdit->text();
		QString mm = ui.Mm_lineEdit->text();
		std::ofstream out("./user/user.txt");
		out << yhm.toStdString() << "\n" << mm.toStdString();
		QMessageBox::information(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("注册成功！"));
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
	//delete优化？
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