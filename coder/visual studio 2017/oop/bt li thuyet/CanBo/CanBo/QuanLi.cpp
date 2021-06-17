#include"QuanLicanbo.h"
void QuanLi::nhap() {
	int t;
	cout << "nhap so luong can bo: ";
	cin >> n;
	cout << "1-giang vien/2-nhan vien";
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t == 1)
			a[i] = new GiangVien;
		if (t == 2)
			a[i] = new NhanVien;
		a[i]->nhap();
		a[i]->Luong();
		tong = tong + a[i]->LuongCanBo();
	}
}
void QuanLi::xuat() {
	for (int i = 0; i < n; i++) {
		a[i]->xuat();
		cout << "\nLuong can bo: " << a[i]->LuongCanBo();
	}
}
void QuanLi::tongLuong() {
	cout << "so luong phai tra cho can bo: " << tong;
}
void QuanLi::MinLuong() {
	int min,k;
	for (int i = 0; i < n; i++) {
		if (a[i]->Gv() == true) {
			min = a[i]->LuongCanBo();
			k = i;
		}
		break;
	}
	for (int i = k; i < n; i++) {
		if (a[i]->Gv() == true && a[i]->LuongCanBo() < min) {
			min = a[i]->LuongCanBo();
		}
	}
	cout << "\ngiang vien co luong thap nhat la: ";
	for (int i = k; i < n; i++) {
		if (min == a[i]->LuongCanBo() && a[i]->Gv() == true)
			a[i]->xuat();
	}
}