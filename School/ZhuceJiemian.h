#pragma once

#include <QWidget>
#include "ui_ZhuceJiemian.h"
#include "School.h"

	
class ZhuceJiemian : public QWidget
{
	Q_OBJECT
public:
	ZhuceJiemian(QWidget* parent = Q_NULLPTR);
	~ZhuceJiemian() = default;
	void Connect();
	void TouMing();
private:
	Ui::ZhuceJiemian ui;
signals:

private slots:
	void FanHui();
};
