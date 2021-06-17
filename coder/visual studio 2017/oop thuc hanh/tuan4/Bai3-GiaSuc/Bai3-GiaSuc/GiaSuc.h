#pragma once
#include<iostream>
#include <string>
using namespace std;
class GiaSuc {
protected:
	int SoLuong;
	string TiengKeu;
	int Milk;
public:
    GiaSuc(void);
	~ GiaSuc(void);
	virtual void nhap();
	virtual void xuat();
	virtual void Sua();
	virtual int LaySua();
	virtual int SoConDuocSinhRa();
	virtual void Voice();
};
