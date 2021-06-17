#include"NhanVien.h"
void NhanVien::nhap() {
	CanBo::nhap();
	cout << "nhap phong ban nhan vien: ";
	cin >> PhongBan;
	cout << "nhap so ngay lam viec: ";
	cin >> SoNgayCong;
	cout << "nhap chuc vu nhan vien: 1-truong phong/2-pho phong/3-nhan vien ";
	cin >> ChucVu;
	
}
void NhanVien::xuat() {
	CanBo::xuat();
	cout << "\nphong ban nhan vien: " << PhongBan;
	cout << "\nso ngay cong: " << SoNgayCong;
	cout << "\nchu vu cuanhan vien: ";
	if (ChucVu == 1)
		cout << "truong phong";
	if (ChucVu == 2)
		cout << "pho phong";
	if (ChucVu == 3)
		cout << "nhan vien";
	
}
void NhanVien::Luong() {
	if (ChucVu == 1) {
		PhuCap = 2000;
		LuongCB = HeSoLuong * 730 + PhuCap + SoNgayCong * 200;
	}
	if (ChucVu == 2) {
		PhuCap = 1000;
		LuongCB = HeSoLuong * 730 + PhuCap + SoNgayCong * 200;
	}
	if (ChucVu == 3) {
		PhuCap = 500;
		LuongCB = HeSoLuong * 730 + PhuCap + SoNgayCong * 200;
	}
	
}
bool NhanVien::Gv() {
	return false;
}