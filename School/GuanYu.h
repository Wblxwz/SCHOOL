#pragma once

#include <QWidget>
#include "School.h"
#include "ui_GuanYu.h"

class GuanYu : public QWidget
{
	Q_OBJECT

public:
	GuanYu(QWidget *parent = Q_NULLPTR);
	~GuanYu();
	void TouMing();
private:
	Ui::GuanYu ui;
};
