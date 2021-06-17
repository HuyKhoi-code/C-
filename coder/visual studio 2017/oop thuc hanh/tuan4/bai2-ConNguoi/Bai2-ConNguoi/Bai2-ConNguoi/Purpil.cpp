#include"Purpil.h"
Purpil::Purpil(){}
Purpil::~Purpil(){}
void Purpil::Nhap() {
	People::Nhap();
	cout << "\nnhap trinh do hoc van: ";
	cin >> Grade;
	cout << "\nnhap diem trung binh: ";
	cin >> DiemTB;
}
void Purpil::xuat() {
	People::xuat();
	cout << "\nhoc lop: " << Grade;
	cout << "\ndiem trung binh" << DiemTB;
}