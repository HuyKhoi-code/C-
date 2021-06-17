#include "Nhanvien.h"
#include "VanPhong.h"
NhanVienVP::NhanVienVP(void){}
NhanVienVP::~NhanVienVP(void){}
void NhanVienVP::nhap() {
	NhanVien::nhap();
	cout << "so ngay lam viec: ";
	cin >> WorkDay;
}
long NhanVienVP::Luong() {
	return WorkDay * 10000;
}
void NhanVienVP::xuat() {
	NhanVien::xuat();
}