#pragma once
#include "people.h"
class Artist : public People {
private:
	int Pic;
public:
	Artist();
	~Artist();
	void Nhap();
	void xuat();
};
