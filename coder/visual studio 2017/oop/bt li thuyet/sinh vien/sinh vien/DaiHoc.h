#pragma once
#include"SinhVien.h"
class DaiHoc : public SinhVien {
private:
	string TenLuanVan;
	int DiemLuanVan;
public:
	DaiHoc();
	~DaiHoc();
	void nhap();
	void xuat();
	bool SVDaiHoc();
	bool Totnghiep();
};
