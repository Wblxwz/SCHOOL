#pragma once

#include <QWidget>
#include "GuanLiYuan.h"
#include "ui_jianjie.h"

class jianjie : public QWidget
{
	Q_OBJECT

public:
	jianjie(QWidget* parent = Q_NULLPTR);
	~jianjie();
	void Init(QString&,const int &);
	void xiugai();
private:
	Ui::jianjie ui;
};
