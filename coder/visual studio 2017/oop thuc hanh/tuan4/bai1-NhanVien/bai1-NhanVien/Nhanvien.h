#pragma once
#include <iostream>
#include<string>
using namespace std;
class NhanVien {
protected:
	string HoTen;
	int NgaySinh;
public:
	NhanVien(void);
	~NhanVien(void);
	virtual void nhap();
	virtual void xuat();
	virtual long Luong();
};

