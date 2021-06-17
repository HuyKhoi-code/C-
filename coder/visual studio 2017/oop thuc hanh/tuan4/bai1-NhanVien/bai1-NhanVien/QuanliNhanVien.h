#pragma once
#include "Nhanvien.h"
#include "VanPhong.h"
#include "SanXuat.h"
using namespace std;
class Quanli {
	int SoLuong;
	NhanVien **ds;
public:
	Quanli(int);
	void nhap();
	void xuat();
	void TongLuong();
	void HighestSalary();
};