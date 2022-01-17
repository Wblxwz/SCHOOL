#include "School.h"

bool zhuce = false;
bool guanliyuan = false;
std::string yhm;
std::string mm;

School::School(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	yuyin->say(QString::fromLocal8Bit("欢迎使用校园寻路系统"));
	Connect();
	TouMing();
}

void School::TouMing()
{
	ui.BiaoTI->setAttribute(Qt::WA_TranslucentBackground);
	ui.frame->setAttribute(Qt::WA_TranslucentBackground);
	ui.frame_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.YHM_lable->setAttribute(Qt::WA_TranslucentBackground);
	ui.Mm_lable_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.Xgmm->setAttribute(Qt::WA_TranslucentBackground);
}

void School::Connect()
{
	connect(ui.ZhuCe_Button, &QPushButton::clicked, this, &School::ZhuCe);
	connect(ui.DengLu_Button, &QPushButton::clicked, this, &School::DengLu);
	connect(ui.Xgmm, &QPushButton::clicked, this, [=]()
		{
			Xiugaimima* X = new Xiugaimima();
			X->show();
			this->close();
		});
}


void School::ZhuCe()
{
	ZhuceJiemian* Z = new ZhuceJiemian();
	//delete优化？
	Z->setAttribute(Qt::WA_DeleteOnClose);
	//Z->setWindowState(Qt::WindowFullScreen);
	Z->show();
	this->close();
	//delete this;
}

void School::DengLu()
{
	//To Do:注册
	std::ifstream in("./user/user.txt");
	std::ifstream gly("./user/root.txt");
	std::getline(in, yhm);
	std::getline(in, mm);
	std::getline(gly, root_yhm);
	std::getline(gly, root_mm);
	if (ui.YHM_line->text() == QString::fromStdString(root_yhm) && ui.Mima_Line->text() == QString::fromStdString(root_mm) && (ui.YHM_line->text() != "" && ui.Mima_Line->text() != "") && (ui.YHM_line->text().count() < 8 && ui.Mima_Line->text().count() < 8))
	{
		guanliyuan = true;
		QMessageBox::information(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("登录成功！"));
		XiTong* X = new XiTong();
		//delete优化？
		X->setAttribute(Qt::WA_DeleteOnClose);
		//X->setWindowState(Qt::WindowFullScreen);
		X->show();
		this->close();
		//delete this;
	}
	else if ((ui.YHM_line->text() == QString::fromStdString(yhm) && ui.Mima_Line->text() == QString::fromStdString(mm)) && (ui.YHM_line->text().count() < 8 && ui.Mima_Line->text().count() < 8) && (ui.YHM_line->text() != "" && ui.Mima_Line->text() != ""))
	{
		guanliyuan = false;
		QMessageBox::information(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("登录成功！"));
		XiTong* X = new XiTong();
		//delete优化？
		X->setAttribute(Qt::WA_DeleteOnClose);
		//X->setWindowState(Qt::WindowFullScreen);
		X->show();
		this->close();
		//delete this;
	}
	else
	{
		if ((ui.YHM_line->text() != QString::fromStdString(yhm) || ui.Mima_Line->text() != QString::fromStdString(mm)) && (ui.YHM_line->text() != "" && ui.Mima_Line->text() != ""))
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("用户名或密码错误！"));
		else if (ui.YHM_line->text() == "" && ui.Mima_Line->text() == "")
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名和密码！"));
		else if (ui.YHM_line->text() == "")
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入用户名！"));
		else if (ui.Mima_Line->text() == "")
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请输入密码！"));
		else if (!zhuce)
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请先注册！"));
		else if (ui.YHM_line->text().count() > 8 || ui.Mima_Line->text().count() > 8)
			QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("用户名或密码错误（最多8位）"));
	}
}
