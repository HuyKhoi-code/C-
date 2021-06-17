#pragma once
#include "people.h"
class Worker : public People {
private:
	int Luong;
	int WorkDayPerYear;
public:
	Worker();
	~Worker();
	void Nhap();
	void xuat();
};