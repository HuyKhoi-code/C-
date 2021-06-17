#include "Nhanvien.h";
using namespace std;
NhanVien::NhanVien(void){}
NhanVien::~NhanVien(void) {};
void NhanVien::nhap() {
	cout << "nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "nhap ngay sinh:";
	cin >> NgaySinh;
}
void NhanVien::xuat() {
	cout << "\nho ten: " << HoTen;
	cout << "\nngay sinh: " << NgaySinh;
}
long NhanVien::Luong() {
	return 0;
}



