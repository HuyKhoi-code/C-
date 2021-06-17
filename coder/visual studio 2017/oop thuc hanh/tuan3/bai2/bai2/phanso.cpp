#include"Header.h"
using namespace std;
istream & operator >>(istream& in, PhanSo &b) {
	cout << "nhap tu so: ";
	in >> b.tu;
	cout << "nhap mau so: ";
	in >> b.mau;
	return in;
}
ostream & operator<<(ostream &out, PhanSo b) {
	out << b.tu << "/" << b.mau<<endl;
	return out;
}
PhanSo PhanSo::operator+(PhanSo &b) {
	PhanSo c;
	c.tu = this->tu*b.mau + this->mau*b.tu;
	c.mau = this->mau*b.mau;
	return c;
}
PhanSo PhanSo::operator-(PhanSo &b) {
	PhanSo c;
	c.tu = this->tu*b.mau - this->mau*b.tu;
	c.mau = this->mau*b.mau;
	return c;
}
PhanSo PhanSo::operator*(PhanSo &b) {
	PhanSo c;
	c.tu = this->tu*b.tu;
	c.mau = this->mau*b.mau;
	return c;
}
PhanSo PhanSo::operator/(PhanSo &b) {
	PhanSo c;
	c.tu = this->tu*b.mau;
	c.mau = this->mau*b.tu;
	return c;
}
float PhanSo::operator==(PhanSo &b) {
	float x = float(this->tu) / this->mau;
	float y = float(b.tu) / b.mau;
	if (x == y)
		return 1;
}
float PhanSo::operator!=(PhanSo &b) {
	float x = float(this->tu) / this->mau;
	float y = float(b.tu) / b.mau;
	if (x != y)
		return 1;
}