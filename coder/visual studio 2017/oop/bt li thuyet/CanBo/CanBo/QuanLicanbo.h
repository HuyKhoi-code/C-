#pragma once
#include"CanBo.h"
#include"GiangVien.h"
#include"NhanVien.h"
class QuanLi {
private:
	CanBo**a;
	int n;
	int tong = 0;
public:
	QuanLi() { a = new CanBo*[n]; };
	~QuanLi() {};
	void nhap();
	void xuat();
	void tongLuong();
	void MinLuong();
};