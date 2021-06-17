#pragma once
#include "SinhVien.h"
#include "CaoDang.h"
#include"DaiHoc.h"
class QuanLiSV {
private:
	int SoLuong;
	SinhVien**a;
public:
	QuanLiSV();
	~QuanLiSV();
	void nhap();
	void xuat();
	void DiemTBCaoNhat();
	void SoSVTotNghiep();
};