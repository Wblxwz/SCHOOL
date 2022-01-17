#include "GuanLiYuan.h"

QPoint* Q = new QPoint[17];
int ct;

GuanLiYuan::GuanLiYuan(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setFixedSize(1600, 900);
	TouMing();
	Xianshi();
	Jianjie();
	connect(ui.xg_Button, &QPushButton::clicked, this, &GuanLiYuan::Show);
}

void GuanLiYuan::Xianshi()
{
	QString dd;
	std::string* s = new std::string[17];
	std::string* s1 = new std::string[17];
	std::string* s2 = new std::string[17];
	std::ifstream in_x2, in_y2, d;
	in_x2.open("./infile/x2.txt");
	in_y2.open("./infile/y2.txt");
	d.open("./infile/dingdian.txt");
	for (int i = 0; i < 17; ++i)
	{
		std::getline(in_x2, s1[i]);
		std::getline(in_y2, s2[i]);
		std::getline(d, s[i]);
		Q[i].setX(std::stoi(s1[i]));
		Q[i].setY(std::stoi(s2[i]) - 70);
	}
	for (int i = 0; i < 17; ++i)
	{
		dd += QString::fromStdString(s[i]);
		dd += "\n";
	}
}

inline void GuanLiYuan::paintEvent(QPaintEvent* e)
{
	QPainter p(this);
	QPixmap pix("./Picture/DongXiao1.png");
	QRect r(0, 0, 1100, 900);
	p.drawPixmap(r, pix);
	for (int i = 0; i < 17; ++i)
		for (int j = 0; j < 17; ++j)
			if (B[i][j])
				p.drawLine(Q[i], Q[j]);
}


void GuanLiYuan::TouMing()
{
	if (!guanliyuan)
		ui.CurrentYH->setText(QString::fromStdString(yhm) + QString::fromLocal8Bit("（普通用户）"));
	else
		ui.CurrentYH->setText(QString::fromStdString("root") + QString::fromLocal8Bit("（管理员）"));
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.CurrentYH->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget->setAttribute(Qt::WA_TranslucentBackground);
	ui.Jianjie->setAttribute(Qt::WA_TranslucentBackground);
}

void GuanLiYuan::Jianjie()
{
	QStringList list;
	for (int i = 0; i < 17; ++i)
		list.push_back(q[i]);
	model->setStringList(list);
	ui.Jianjie->setModel(model);
	qindex = model->index(0);
	ui.Jianjie->setCurrentIndex(qindex);
}

void GuanLiYuan::Show()
{
	if (guanliyuan)
	{
		jianjie* j = new jianjie();
		j->Init(ui.Jianjie->currentIndex().data().toString(), ui.Jianjie->currentIndex().row());
		ct = ui.Jianjie->currentIndex().row();
		j->show();
	}
	else
		QMessageBox::critical(NULL, QString::fromLocal8Bit("校园寻路系统"), QString::fromLocal8Bit("请登录管理员账号！"));
}

GuanLiYuan::~GuanLiYuan()
{
}
