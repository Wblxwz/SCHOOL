#pragma once

#include <QWidget>
#include <qstringlistmodel.h>
#include <fstream>
#include "School.h"
#include "tjdd.h"
#include "DaoHang.h"
#include "jianjie.h"
#include "ui_GuanLiYuan.h"

extern int ct;
extern QPoint* Q;

class GuanLiYuan : public QWidget
{
	Q_OBJECT
public:
	GuanLiYuan(QWidget* parent = Q_NULLPTR);
	~GuanLiYuan();
	void paintEvent(QPaintEvent* e);
	void TouMing();
	void Xianshi();
	void Jianjie();
	void Show();
private:
	Ui::GuanLiYuan ui;
	QStringListModel* model = new QStringListModel();
	QModelIndex qindex;
};
