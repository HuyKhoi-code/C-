#include "QuanliNhanVien.h"
Quanli::Quanli(int n) {
    SoLuong=n;
	ds = new NhanVien*[n];
}
void Quanli::nhap() {
	cout << "nhap so luong nhan vien: ";
	cin >> SoLuong;
	int a;
	NhanVien**ds = new NhanVien*[SoLuong];
	for (int i = 0;i<SoLuong ; i++) {
		do {
			cin >> a;
			if ( a != 1 && a != 2)
				cout << "ko hop le";

		} while (a != 1  && a != 2);
		if (a == 1) {
			
				ds[i] = new NhanVienSX;
			}
		if (a == 2) {
			
			ds[i] = new NhanVienVP;
		}
		ds[i]->nhap();
	}
}
void Quanli::xuat() {
	for (int i = 0; i < SoLuong; i++) {
		ds[i]->xuat();
		cout << "luong nhan vien: " << ds[i]->Luong();
		cout << endl;
	}

}
void Quanli::TongLuong() {
	int tong=0;
	for (int i = 0; i < SoLuong; i++) {
		tong = tong + ds[i]->Luong;
	}
	cout << "tong so luong phai tra: " << tong;
}
void Quanli::HighestSalary() {
	int max = ds[1]->Luong;
	for (int i = 0; i < SoLuong; i++) {
		if (ds[i]->Luong > max)
			max = ds[i]->Luong;
	}
	for (int i = 0; i < SoLuong; i++) {
		if (ds[i]->Luong == max)
			ds[i]->xuat();
	}
}
