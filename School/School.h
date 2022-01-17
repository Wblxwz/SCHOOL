#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include <qtexttospeech.h>
#include "ui_School.h"
#include "Xiugaimima.h"
#include "ZhuceJiemian.h"
#include "XiTong.h"

extern bool zhuce;
extern std::string yhm;
extern std::string mm;
extern bool guanliyuan;

class School : public QMainWindow
{
	Q_OBJECT

public:
	School(QWidget* parent = Q_NULLPTR);
	~School() = default;
	void Connect();
	void TouMing();
private:
	Ui::SchoolClass ui;
	QTextToSpeech* yuyin = new QTextToSpeech(this);
	std::string root_yhm, root_mm;
signals:

private slots:
	void ZhuCe();
	void DengLu();
};
