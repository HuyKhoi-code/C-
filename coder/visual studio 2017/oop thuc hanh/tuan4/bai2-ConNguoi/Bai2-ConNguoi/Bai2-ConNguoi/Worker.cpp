#include "Worker.h"
Worker::Worker(){}
Worker::~Worker(){}
void Worker::Nhap() {
	People::Nhap();
	cout << "\nluong co ban: ";
	cin >> Luong;
	cout << "\nnhap so ngay lam viec trong nam: ";
	cin >> WorkDayPerYear;
}
void Worker::xuat() {
	People::xuat();
	cout << "\nluong 1 thang : " << Luong<<"ngan dong";
	cout << "\nso ngay lam viec trong 1 nam: " << WorkDayPerYear;
}