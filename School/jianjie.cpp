#include "jianjie.h"

jianjie::jianjie(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.qd_button, &QPushButton::clicked, this, [=]()
		{
			xiugai();
		});
	connect(ui.fh_button, &QPushButton::clicked, this, [=]()
		{
			this->close();
		});
}

void jianjie::Init(QString& i, const int& ct)
{
	ui.MC->setText(i);
	ui.Jj_edit->setText(QString::fromStdString(jj[ct]));
	ui.MC->setAttribute(Qt::WA_TranslucentBackground);
	ui.label->setAttribute(Qt::WA_TranslucentBackground);
	ui.Jj_edit->setAttribute(Qt::WA_TranslucentBackground);
	ui.fh_button->setAttribute(Qt::WA_TranslucentBackground);
	ui.qd_button->setAttribute(Qt::WA_TranslucentBackground);
}

void jianjie::xiugai()
{
		QString jian = ui.Jj_edit->toPlainText();
		jj[ct] = jian.toStdString();
		std::ofstream out("./infile/jianjie.txt");
		for (int i = 0; i < 17; ++i)
			out << jj[i] << "\n";
		this->close();
}

jianjie::~jianjie()
{
}
