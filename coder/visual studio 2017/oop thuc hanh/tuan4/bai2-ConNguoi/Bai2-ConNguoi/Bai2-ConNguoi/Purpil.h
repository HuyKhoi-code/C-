#pragma once
#include"people.h"
class Purpil : public People {
private:
	int Grade;
	float DiemTB;
public:
	Purpil();
	~Purpil();
	void Nhap();
	void xuat();
};