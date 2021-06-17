#include "SanXuat.h"
NhanVienSX::NhanVienSX(void){}
NhanVienSX::~NhanVienSX(void){}
void NhanVienSX::nhap() {
	NhanVien::nhap();
	cout << "luong co ban: ";
	cin >> LuongCanBan;
	cout << "so san pham: ";
	cin >> SoSP;
}
long NhanVienSX::Luong() {
	return LuongCanBan + SoSP * 5000;
}
void NhanVienSX :: xuat() {
	NhanVien::xuat();
}