#include"Phanso.h"
PhanSo::~PhanSo(){}
istream & operator>>(istream& is, PhanSo &a) {
	cout << "nhap tu so: ";
	is >> a.tu;
	cout << "nhap mau so: ";
	is >> a.mau;
	return is;
}
ostream & operator <<(ostream &os, PhanSo a) {
	os << a.tu << "/" << a.mau;
	return os;
}
PhanSo PhanSo::operator+(PhanSo &a) {
	PhanSo b;
	b.tu = this->tu * a.mau + a.tu*this->mau;
	b.mau = a.mau*this->mau;
	return b;
}
PhanSo PhanSo::operator-(PhanSo &a) {
	PhanSo b;
	b.tu= this->tu * a.mau - a.tu*this->mau;
	b.mau= a.mau*this->mau;
	return b;
}
PhanSo PhanSo::operator*(PhanSo &a) {
	PhanSo b;
	b.tu = a.tu*this->tu;
	b.mau = a.mau*this->mau;
	return b;
}
int PhanSo::ucln(int a,int b) {
	int r;
	while (a%b != 0) {
		if (a > b)
			r = a / b;
		if (b > a)
			r = b / a;
		b = a;
		a = r;
	}
	return b;
}
PhanSo PhanSo::RutGon() {
	int a = ucln(this->tu, this->mau);
	PhanSo b;
	b.tu = this->tu / a;
	b.mau = this->mau / a;
	return b;
}