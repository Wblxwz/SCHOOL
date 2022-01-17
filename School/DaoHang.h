#pragma once

#include <QWidget>
#include <qdebug.h>
#include <qpainter.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <limits>
#include "qtexttospeech.h"
#include "School.h"
#include "ui_DaoHang.h"
extern QString* q;
extern std::string* jj;
extern int dangqian;
extern bool B[17][17];
//修改类成员返回引用!
//当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。
class DingDian
{
public:
	//DingDian() :x(x), y(y) { };
	void Init(const int& x, const int& y);
	int& FanX();
	int& FanY();
	QString& XinXi();
private:
	QString xinxi;
	int x = 0, y = 0;
};


class DaoHang : public QWidget
{
	Q_OBJECT
		friend class MGraph;
public:
	DaoHang(QWidget* parent = Q_NULLPTR);
	~DaoHang() = default;
	void paintEvent(QPaintEvent* e);
	void Init();
	void ShengCheng();
	void P(MGraph& m, int i, int j);
	void TouMing();
private:
	Ui::DaoHang ui;
	QTextToSpeech* yuyin = new QTextToSpeech(this);
};


class MGraph
{
public:
	//MGraph() = default;
	~MGraph()
	{
		delete[] Dingdian;
		delete[]Linjie;
		delete[] dist;
		delete[] path;
	}
	void Set(const int& i, const QString& q, const int& dingdian, const int& bian);
	void Init();
	void Create(const int& i, const int& j, const int& quan);
	void Print();
	int& FanDist(const int& i, const int& j);
	int& LinJie(const int& i, const int& j);
	int& Path(const int& i, const int& j);
	DingDian& FanDing(const int& i);
	int Length(DingDian& d_1, DingDian& d_2);
private:
	int dingdian_num;
	int bian_num;
	//To Do:动态获取数组大小
	DingDian* Dingdian = new DingDian[17];
	int(*Linjie)[17] = new int[17][17];
	int(*dist)[17] = new int[17][17];
	int(*path)[17] = new int[17][17];
};
