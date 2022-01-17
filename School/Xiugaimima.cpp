#include "Xiugaimima.h"


Xiugaimima::Xiugaimima(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(519, 339);
	connect(ui.QueRen_Button, &QPushButton::clicked, this, &Xiugaimima::Xiugai);
	connect(ui.Fanhui_Button, &QPushButton::clicked, this, &Xiugaimima::Fanhui);
	connect(ui.Wangji_Button, &QPushButton::clicked, this, &Xiugaimima::Wjmm);
	std::ifstream in;
	in.open("./user/user.txt");
	std::getline(in, yhm);
	std::getline(in, mm);
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.Yhm_Line->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.Mm_line->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_3->setAttribute(Qt::WA_TranslucentBackground);
	ui.Wjmm_line->setAttribute(Qt::WA_TranslucentBackground);
	ui.Fanhui_Button->setAttribute(Qt::WA_TranslucentBackground);
	ui.QueRen_Button->setAttribute(Qt::WA_TranslucentBackground);
	ui.Wangji_Button->setAttribute(Qt::WA_TranslucentBackground);
}

void Xiugaimima::Wjmm()
{
	if (ui.Yhm_Line->text() == QString::fromStdString(yhm))
		ui.Wjmm_line->setText(QString::fromStdString(mm));
	else if (ui.Yhm_Line->text() == "root")
	{
		std::ifstream in;
		in.open("./user/root.txt");
		std::string s, s1;
		std::getline(in, s);
		std::getline(in, s1);
		ui.Wjmm_line->setText(QString::fromStdString(s1));
	}
}

void Xiugaimima::Xiugai()
{
	if (ui.Yhm_Line->text() == QString::fromStdString(yhm) && (ui.Yhm_Line->text() != "" && ui.Mm_line->text() != ""))
	{
		mm = ui.Mm_line->text().toStdString();
		std::ofstream out("./user/user.txt");
		out << yhm << "\n" << mm;
		QMessageBox::information(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("密码修改成功！"));
	}
	else if (ui.Yhm_Line->text() == "root" && ui.Mm_line->text() != "" && ui.Mm_line->text().count() <= 8)
	{
		std::ifstream in;
		in.open("./user/root.txt");
		std::string s, s1;
		std::getline(in, s);
		std::getline(in, s1);
		std::ofstream out("./user/root.txt");
		out << "root" << "\n" << ui.Mm_line->text().toStdString();
		QMessageBox::information(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("密码修改成功！"));
	}
	else if (ui.Yhm_Line->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名！"));
	else if (ui.Mm_line->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入修改后的密码！"));
	else if (ui.Yhm_Line->text() == "" && ui.Mm_line->text() == "")
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名和修改后的密码！"));
	else if (ui.Mm_line->text().count() > 8)
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("用户名或密码错误（最多8位）"));
}

void Xiugaimima::Fanhui()
{
	School* S = new School();
	this->close();
	S->show();
}

Xiugaimima::~Xiugaimima()
{
}
