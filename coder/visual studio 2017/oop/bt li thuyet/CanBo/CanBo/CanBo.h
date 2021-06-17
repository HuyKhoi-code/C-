#pragma once
#include<iostream>
#include<string>
using namespace std;
class CanBo {
protected:
	string Name;
	long PhuCap;
	int HeSoLuong;
	long LuongCB;
public:
	CanBo() {};
	~CanBo() {};
	virtual void nhap();
	virtual void xuat();
	virtual long LuongCanBo();
	virtual void Luong();
	virtual bool Gv();
};
