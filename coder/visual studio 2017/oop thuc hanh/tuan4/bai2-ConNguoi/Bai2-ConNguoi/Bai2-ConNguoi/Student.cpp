#include"Student.h"
Student::Student(){}
Student::~Student(){}
void Student::Nhap() {
	People::Nhap();
	cout << "\nhap ma so sinh vien: ";
	cin >> MSSV;
	cout << "\nnhap ten truong: ";
	cin.ignore();
	getline(cin, Truong);
}
void Student::xuat() {
	People::xuat();
	cout << "\nma so sinh vien: " << MSSV;
	cout << "\nten truong dang hoc: " << Truong;
}