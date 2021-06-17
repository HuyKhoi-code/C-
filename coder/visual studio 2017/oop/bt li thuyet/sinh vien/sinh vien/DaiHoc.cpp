#include"DaiHoc.h"
#include"SinhVien.h"
DaiHoc::DaiHoc(){}
DaiHoc::~DaiHoc() {
}
void DaiHoc::nhap() {
	SinhVien::nhap();
	cout << "nhap ten luan van: ";
	cin.ignore();
	getline(cin, TenLuanVan);
	cout << "nhap diem luan van: ";
	cin >> DiemLuanVan;
}
void DaiHoc::xuat() {
	SinhVien::xuat();
	cout << "\nten luan van: " << TenLuanVan;
	cout << "\ndiem luan van: " << DiemLuanVan;
}
bool DaiHoc::SVDaiHoc() {
	return true;
}
bool DaiHoc::Totnghiep() {
	if (SoTinChi > 170 && DTB > 5 && DiemLuanVan > 5)
		return true;
	else
		return false;
}
