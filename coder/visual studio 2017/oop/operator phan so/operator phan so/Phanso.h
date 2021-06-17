#pragma once
#include <iostream>
#include<conio.h>
using namespace std;
class PhanSo {
private:
	int mau, tu;
public:
	PhanSo() {
		int tu;
		int mau = 1;
	}
	~PhanSo();
	friend istream & operator >>(istream &, PhanSo &);
	friend ostream & operator<<(ostream &, PhanSo);
	PhanSo operator+(PhanSo &);
	PhanSo operator-(PhanSo &);
	PhanSo operator*(PhanSo &);
	PhanSo RutGon();
	int ucln(int,int);
};
