#pragma once
#include<iostream>
using namespace std;

class Diem{
private:
	double HoanhDo, TungDo;
public:
	void Nhap();
	void Xuat();
	Diem TinhTien(Diem &);
	Diem Quay(int &, Diem &);
	Diem Nhan(float &);
	Diem Chia(float &);
};
class TamGiac{
private:
	Diem A, B, C;
public:
	void Nhap();
	void Xuat();
	TamGiac PhongTo(float &);
	TamGiac ThuNho(float &);
	TamGiac TinhTien(Diem &);
	TamGiac Quay(int &, Diem &);
};

