#include"SinhVien.h"
SinhVien::SinhVien(){}
SinhVien::~SinhVien(){}
void SinhVien::nhap() {
	cout << "nhap ma so sinh vien: ";
	cin >> MSSV;
	cout << "nhap ho ten sinh vien: ";
	cin.ignore();
	getline(cin, Name);
	cout << "nhap so tin chi dat duoc: ";
	cin >> SoTinChi;
	cout << "nhap diem trung binh: ";
	cin >> DTB;
}
void SinhVien::xuat() {
	cout << "\nma so sinh vien: " << MSSV;
	cout << "\nho ten sinh vien: " << Name;
	cout << "\nso tin chi dat duoc: " << SoTinChi;
	cout << "\ndiem trung binh cua sinh vien: " << DTB;
}
float SinhVien::DiemTB() {
	return DTB;
}
bool SinhVien::SVDaiHoc() {
	return false;
}
bool SinhVien::Totnghiep() {
	return false;
}