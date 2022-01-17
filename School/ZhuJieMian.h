#pragma once

#include <QWidget>
#include "School.h"
#include "XiTong.h"
#include "ui_ZhuJieMian.h"

extern int index;

class ZhuJieMian : public QWidget
{
	Q_OBJECT
		friend class XiTong;
public:
	ZhuJieMian(QWidget* parent = Q_NULLPTR);
	~ZhuJieMian();
	void TouMing();
private:
	Ui::ZhuJieMian ui;
private slots:
	void GengGai();
};
