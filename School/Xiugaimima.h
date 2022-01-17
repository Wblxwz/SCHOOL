#pragma once

#include <QWidget>
#include <fstream>
#include "School.h"
#include "ui_Xiugaimima.h"

class Xiugaimima : public QWidget
{
	Q_OBJECT

public:
	Xiugaimima(QWidget *parent = Q_NULLPTR);
	~Xiugaimima();
	void Xiugai();
	void Fanhui();
	void Wjmm();
private:
	Ui::Xiugaimima ui;
	std::string mm1;
	//std::string yhm1, mm1;
};
