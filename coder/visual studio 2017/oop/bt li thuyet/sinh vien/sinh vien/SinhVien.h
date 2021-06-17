#pragma once
#include <iostream>
#include<string>
using namespace std;
class SinhVien {
protected:
	int MSSV;
	string Name;
	int SoTinChi;
	float DTB;
public:
	SinhVien();
	~SinhVien();
	virtual void nhap();
	virtual void xuat();
	virtual float DiemTB();
	virtual bool SVDaiHoc();
	virtual bool Totnghiep();
};
