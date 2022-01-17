#pragma once

#include <QWidget>
#include "ui_tjdd.h"

class tjdd : public QWidget
{
	Q_OBJECT

public:
	tjdd(QWidget *parent = Q_NULLPTR);
	~tjdd();
	void Tjddmc();
private:
	Ui::tjdd ui;
};
