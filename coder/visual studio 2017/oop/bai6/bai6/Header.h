#include<iostream>
#pragma once
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
class DaGiac{
private:
	Diem *A;
	int SoDinh;
public:
	void Nhap();
	void Xuat();
	DaGiac PhongTo();
	DaGiac ThuNho();
	DaGiac TinhTien();
	DaGiac Quay();
}; 
