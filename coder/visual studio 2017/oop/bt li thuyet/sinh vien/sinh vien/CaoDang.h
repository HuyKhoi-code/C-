#pragma once
#include "SinhVien.h"
class CaoDang : public SinhVien {
	float DiemTotNghiep;
public:
	CaoDang();
	~CaoDang();
	void nhap();
	void xuat();
	bool SVDaiHoc();
	bool Totnghiep();
};
