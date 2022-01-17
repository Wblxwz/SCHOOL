#include "DaoHang.h"
#define max 17

static MGraph m;
static QString qq;
static int lucheng;
int dangqian = 0;
bool B[17][17];
QString* q = new QString[max];
std::string* jj = new std::string[max];
int cnt = 0;
DaoHang::DaoHang(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

void DaoHang::TouMing()
{
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_3->setAttribute(Qt::WA_TranslucentBackground);
	ui.DaoHang_Edit->setAttribute(Qt::WA_TranslucentBackground);
	ui.label_4->setAttribute(Qt::WA_TranslucentBackground);
	ui.CurrentYH->setAttribute(Qt::WA_TranslucentBackground);
	ui.widget_2->setAttribute(Qt::WA_TranslucentBackground);
	ui.YuYin_Button->setAttribute(Qt::WA_TranslucentBackground);
	ui.TingZhi_Button->setAttribute(Qt::WA_TranslucentBackground);
}


void DaoHang::P(MGraph& m, int i, int j)
{
	++cnt;
	int mid = m.Path(i, j);
	if (mid == j)
	{
		if (cnt == 1)
			qq += QString::fromLocal8Bit("向");
		else
			qq += QString::fromLocal8Bit("再向");
		qq += m.FanDing(mid).XinXi();
		qq += QString::fromLocal8Bit("的方向前进");
		lucheng += m.FanDist(i, j);
		qq += QString::number(m.FanDist(i, j));
		qq += QString::fromLocal8Bit("米。");
		return;
	}
	else
	{
		if (cnt == 1)
			qq += QString::fromLocal8Bit("先向");
		else
			qq += QString::fromLocal8Bit("再向");
		qq += m.FanDing(mid).XinXi();
		qq += QString::fromLocal8Bit("的方向前进");
		lucheng += m.FanDist(i, mid);
		qq += QString::number(m.FanDist(i, mid));
		qq += QString::fromLocal8Bit("米，");
		P(m, mid, j);
	}
}

inline void DaoHang::Init()
{
	this->setFixedSize(1600, 900);
	TouMing();
	yuyin->setLocale(QLocale::Chinese);
	yuyin->setRate(0.0);
	yuyin->setPitch(1.0);
	yuyin->setVolume(1.0);
	if (!guanliyuan)
		ui.CurrentYH->setText(QString::fromStdString(yhm) + QString::fromLocal8Bit("（普通用户）"));
	else
		ui.CurrentYH->setText(QString::fromStdString("root") + QString::fromLocal8Bit("（管理员）"));
	ui.FangShi->addItem(QString::fromLocal8Bit("步行"));
	ui.FangShi->addItem(QString::fromLocal8Bit("骑行"));
	ui.FangShi->addItem(QString::fromLocal8Bit("驾车"));
	//构造函数？
	m.Init();
	connect(ui.ShengCheng, &QPushButton::clicked, this, &DaoHang::ShengCheng);
	connect(ui.YuYin_Button, &QPushButton::clicked, this, [=]() {yuyin->say(ui.DaoHang_Edit->toPlainText()); });
	connect(ui.TingZhi_Button, &QPushButton::clicked, this, [=]() {yuyin->stop(); });
	std::ifstream in("./infile/dingdian.txt");
	std::ifstream in_jj("./infile/jianjie.txt");
	std::ifstream in_x("./infile/x.txt");
	std::ifstream in_y("./infile/y.txt");
	std::ifstream in_x1("./infile/x1.txt");
	std::ifstream in_y1("./infile/y1.txt");
	std::ifstream in_x2("./infile/x2.txt");
	std::ifstream in_y2("./infile/y2.txt");
	std::string* s = new std::string[max];
	//调整格式？
	std::string* x = new std::string[max];
	std::string* y = new std::string[max];
	std::string* xs = new std::string[24];
	std::string* ys = new std::string[24];
	int* x1 = new int[24];
	int* y1 = new int[24];
	for (int i = 0; i < 24; ++i)
	{
		std::getline(in_x1, xs[i]);
		std::getline(in_y1, ys[i]);
	}
	for (int i = 0; i < max; ++i)
	{
		std::getline(in_x, x[i]);
		std::getline(in_y, y[i]);
		std::getline(in_jj, jj[i]);
		//string转int
		m.FanDing(i).FanX() = atoi(x[i].c_str());
		m.FanDing(i).FanY() = atoi(y[i].c_str());
	}
	for (int i = 0; i < 24; ++i)//临时数组处理?
	{
		x1[i] = atoi(xs[i].c_str());
		y1[i] = atoi(ys[i].c_str());
	}
	for (int i = 0; i < 24; ++i)
	{
		m.Create(x1[i], y1[i], m.Length(m.FanDing(x1[i]), m.FanDing(y1[i])));
		m.Create(y1[i], x1[i], m.Length(m.FanDing(x1[i]), m.FanDing(y1[i])));
	}
	for (int i = 0; i < max; ++i)
	{
		std::getline(in, s[i]);
		q[i] = QString::fromStdString(s[i]);
		m.Set(i, q[i], max, max * max);
		ui.QiDian->addItem(q[i]);
		ui.ZhongDian->addItem(q[i]);
	}
	//弗洛伊德初始化
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j)
		{
			m.FanDist(i, j) = m.LinJie(i, j);
			m.Path(i, j) = j;
		}
	//弗洛伊德算法
	int temp;
	for (int k = 0; k < max; ++k)
		for (int i = 0; i < max; ++i)
			for (int j = 0; j < max; ++j)
			{
				temp = (m.FanDist(i, k) == INT_MAX || m.FanDist(k, j) == INT_MAX) ? INT_MAX : (m.FanDist(i, k) + m.FanDist(k, j));
				if (m.FanDist(i, j) > temp)
				{
					m.FanDist(i, j) = temp;
					m.Path(i, j) = m.Path(i, k);
				}
			}
	m.Print();
	std::cout << std::endl;
}



inline void DaoHang::paintEvent(QPaintEvent* e)
{
	QPainter p(this);
	QPixmap m("./Picture/DongXiao1.png");
	QRect r(0, 0, 1100, 900);
	p.drawPixmap(r, m);
	for (int i = 0; i < 17; ++i)
		for (int j = 0; j < 17; ++j)
			if (B[i][j])
				p.drawLine(Q[i], Q[j]);
}

void MGraph::Set(const int& i, const QString& q, const int& dingdian, const int& bian)
{
	this->Dingdian[i].XinXi() = q;
	this->bian_num = bian;
	this->dingdian_num = dingdian;
}

void MGraph::Init()
{
	//动态获取大小？
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j)
		{
			if (i == j)
				this->Linjie[i][j] = 0;
			else
				this->Linjie[i][j] = INT_MAX;
		}
}

void MGraph::Create(const int& i, const int& j, const int& quan)
{
	this->Linjie[i][j] = quan;
}

void MGraph::Print()
{
	int count = 0;
	for (int i = 0; i < 17; ++i)
	{
		for (int j = 0; j < 17; ++j)
		{
			std::cout << this->Linjie[i][j] << " ";
			if (this->Linjie[i][j] != 0 && this->Linjie[i][j] != INT_MAX)
				B[i][j] = true;
			++count;
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 17; ++i)
	{
		for (int j = 0; j < 17; ++j)
			std::cout << this->path[i][j] << " ";
		std::cout << std::endl;
	}
}

DingDian& MGraph::FanDing(const int& i)
{
	return this->Dingdian[i];
}

QString& DingDian::XinXi()
{
	return this->xinxi;
}

void DingDian::Init(const int& x, const int& y)
{
	this->x = x;
	this->y = y;
}

int& DingDian::FanX()
{
	return this->x;
}

int& DingDian::FanY()
{
	return this->y;
}
//模板,特殊情况处理?
int PingFang(const int& x)
{
	return x * x;
}
int MGraph::Length(DingDian& d_1, DingDian& d_2)
{
	//sqrt 开方
	//自己实现？
	int x1 = PingFang(d_1.FanX() - d_2.FanX());
	int x2 = PingFang(d_1.FanY() - d_2.FanY());
	int cnt = x1 + x2;
	if (cnt > 0)
		return sqrt(cnt);
	else
		return 0;
}

int& MGraph::LinJie(const int& i, const int& j)
{
	return this->Linjie[i][j];
}

int& MGraph::FanDist(const int& i, const int& j)
{
	return this->dist[i][j];
}



int& MGraph::Path(const int& i, const int& j)
{
	return this->path[i][j];
}


void DaoHang::ShengCheng()
{
	cnt = 0;
	lucheng = 0;
	int time = 0;
	ui.DaoHang_Edit->clear();
	QString start = ui.QiDian->currentText();
	QString end = ui.ZhongDian->currentText();
	int start_index = ui.QiDian->currentIndex();
	int end_index = ui.ZhongDian->currentIndex();
	qq = QString::fromLocal8Bit("从");
	qq += m.FanDing(start_index).XinXi();
	qq += QString::fromLocal8Bit("到");
	qq += m.FanDing(end_index).XinXi();
	qq += QString::fromLocal8Bit("：");
	if (start == end)
	{
		ui.DaoHang_Edit->clear();
		ui.DaoHang_Edit->append(QString::fromLocal8Bit("起点和终点重复，请重新选择"));
		ui.DaoHang_Edit->append(m.FanDing(start_index).XinXi() + QString::fromLocal8Bit("简介：") + QString::fromStdString(jj[start_index]));
	}
	else
	{
		P(m, start_index, end_index);
		qq += "\n";
		qq += QString::fromLocal8Bit("总路程：");
		qq += QString::number(lucheng);
		qq += QString::fromLocal8Bit("米");
		int fs = ui.FangShi->currentIndex();
		switch (fs)
		{
		case 0:
			time = lucheng / 83;
			break;
		case 1:
			time = lucheng / 250;
			break;
		case 2:
			time = lucheng / 1000;
			break;
		default:
			break;
		}
		if (time < 1)
			time = 1;
		qq += "\n";
		qq += QString::fromLocal8Bit("总时间：");
		qq += QString::number(time);
		qq += QString::fromLocal8Bit("分钟");
		ui.DaoHang_Edit->append(qq);
	}
}
