#include"DaThuc.h"
DaThuc::DaThuc() {
	a = 0;
	b = 0;
}
DaThuc::~DaThuc(){}
void DaThuc::nhap() {
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
}
void DaThuc::ptbac1() {
	float x;
	x = -b / a;
	cout << x;
}
DaThuc DaThuc::operator+(DaThuc X) {
	DaThuc Y;
	Y.a = a + X.a;
	Y.b = b + X.b;
	return Y;
}
void DaThuc::xuat() {
	cout << endl;
	cout << a << "*x+" << b;
}