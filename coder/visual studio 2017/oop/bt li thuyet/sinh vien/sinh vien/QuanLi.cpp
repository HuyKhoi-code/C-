#include"QuanLi.h"
#include"CaoDang.h"
#include"DaiHoc.h"
#include"SinhVien.h"
QuanLiSV::QuanLiSV() {
	a = new SinhVien*[SoLuong];
}
QuanLiSV::~QuanLiSV(){}
void QuanLiSV::nhap() {
	int t;
	cout << "nhap so luong sinh vien: ";
	cin >> SoLuong;
	cout << "1-Sinh vien dai hoc/ 2-Sinh vien cao dang";
	for (int i = 0; i < SoLuong; i++) {
		cin >> t;
		if (t == 1) {
			a[i] = new DaiHoc;
		}
		if (t == 2)
			a[i] = new CaoDang;
		a[i]->nhap();
	}
}
void QuanLiSV::xuat() {
	for (int i = 0; i < SoLuong; i++)
		a[i]->xuat();
}
void QuanLiSV::SoSVTotNghiep() {
	int dem = 0;
	for (int i = 0; i < SoLuong; i++) {
		if (a[i]->Totnghiep() == true)
			dem++;
	}
	cout << "\n---------------------------------------";
	cout << "\nso sinh vien tot nghiep: " << dem;
}
void QuanLiSV::DiemTBCaoNhat() {
	float max = a[0]->DiemTB();
	for (int i = 0; i < SoLuong; i++) {
		if (a[i]->DiemTB() && a[i]->SVDaiHoc() == true)
			max = a[i]->DiemTB();
	}
	for (int i = 0; i < SoLuong; i++) {
		if (a[i]->DiemTB() == max) {
			cout << "\n-------------------------------------";
			cout << "\nsinh vien co diem trung binh cao nhat: ";
			a[i]->xuat();
		}
	}
}

