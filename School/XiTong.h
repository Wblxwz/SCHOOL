#pragma once

#include <QWidget>
#include <qtabwidget.h>
#include "ui_XiTong.h"
#include "GuanYu.h"
#include "ZhuJieMian.h"
#include "GuanLiYuan.h"
#include "DaoHang.h"

class XiTong : public QWidget
{
	Q_OBJECT

public:
	XiTong(QWidget *parent = Q_NULLPTR);
	~XiTong() = default;
private:
	Ui::XiTong ui;
signals:

private slots:
	void Init();
	void BJ();
};
