#pragma once
#include <iostream>
using namespace std;
class PhanSo {
private:
	int tu, mau;
public:
	PhanSo() {
		int tu;
		int mau = 1;
	}
public :
	friend istream & operator >>(istream &, PhanSo &);
	friend ostream & operator <<(ostream &, PhanSo );
	PhanSo operator+(PhanSo &);
	PhanSo operator-(PhanSo &);
	PhanSo operator*(PhanSo &);
	PhanSo operator/(PhanSo &);
	float  operator==(PhanSo &);
	float operator!=(PhanSo &);
};
