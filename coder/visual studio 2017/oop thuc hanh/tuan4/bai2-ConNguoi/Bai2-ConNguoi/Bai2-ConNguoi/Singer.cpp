#include "Singer.h"
Singer::Singer(){}
Singer::~Singer(){}
void Singer::Nhap() {
	People::Nhap();
	cout << "\nnhap so tien catxe nhan duoc: ";
	cin >> Catxe;
}
void Singer::xuat() {
	People::xuat();
	cout << "\ncatxe cho moi buoi bieu dien: " << Catxe;
}