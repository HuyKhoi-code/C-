#include "Header.h"
using namespace std;
void Phanso::Nhap() {
	cout << "nhap tu so: ";
	cin >> this->tu;
	cout << "nhap mau so: ";
	cin >> this->mau;
}
void Phanso::Xuat() {
	cout << this->tu << "/" << this->mau << endl;
}
void Phanso::DinhGT() {
	float d;
	d = float(this->tu) / this->mau;
	cout<< d<<endl;
}
Phanso Phanso::Cong(Phanso b) {
	Phanso c;
	c.tu = this->tu*b.mau + this->mau*b.tu;
	c.mau = this->mau*b.mau;
	c.Rutgon();
	return c;
}
Phanso Phanso::Tru(Phanso b) {
	Phanso c;
	c.tu = this->tu*b.mau - this->mau*b.tu;
	c.mau = this->mau*b.mau;
	c.Rutgon();
	return c;
}
Phanso Phanso::Nhan(Phanso b) {
	Phanso c;
	c.tu = this->tu*b.tu;
	c.mau = this->mau*b.mau;
	c.Rutgon();
	return c;
}
Phanso Phanso::Chia(Phanso b) {
	Phanso c;
	c.tu = this->tu*b.mau;
	c.mau = this->mau*b.tu;
	c.Rutgon();
	return c;
}
int  UCLN(int a, int b) {
	int r;
	while (a%b != 0)
	{
		if (a > b)
			r = a % b;
		else
			r = b % a;
		b = a;
		a = r;
	}
	return b;
}
void Phanso::Rutgon() {
	int a = UCLN(this->tu, this->mau);
	this->tu = this->tu / a;
	this->mau = this->mau / a;
}