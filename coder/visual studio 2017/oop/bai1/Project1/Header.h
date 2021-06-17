#pragma once
#include <iostream>
using namespace std;
class Phanso 
{
private:
	int tu, mau;
public:
	void Nhap();
	void Xuat();
	Phanso Cong(Phanso b);
	Phanso Tru(Phanso b);
	Phanso Nhan(Phanso b);
	Phanso Chia(Phanso b);
	void Rutgon();
	void DinhGT();
};



