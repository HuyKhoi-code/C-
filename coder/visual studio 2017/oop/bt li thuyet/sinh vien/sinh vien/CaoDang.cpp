#include"CaoDang.h"
#include"SinhVien.h"
CaoDang::CaoDang(){}
CaoDang::~CaoDang(){}
void CaoDang::nhap() {
	SinhVien::nhap();
	cout << "nhap diem tot nghiep: ";
	cin >> DiemTotNghiep;
}
void CaoDang::xuat() {
	SinhVien::xuat();
	cout << "\ndiem tot nghiep: " << DiemTotNghiep;
}
bool CaoDang::SVDaiHoc() {
	return false;
}
bool CaoDang::Totnghiep() {
	if (SoTinChi > 120 && DTB > 5 && DiemTotNghiep > 5)
		return true;
	else
		return false;
}