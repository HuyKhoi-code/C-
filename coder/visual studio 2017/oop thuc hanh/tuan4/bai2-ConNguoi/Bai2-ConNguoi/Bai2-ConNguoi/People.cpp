#include"people.h"
People::People(){}
People::~People(){}
void People::Nhap() {
	cout << "nhap ten doi tuong: ";
	cin.ignore();
	getline(cin, Name);
	cout << "nhap ngay thang nam sinh: ";
	cin >> Ngay >> Thang >> Nam;
}
void People::xuat() {
	cout << "\nten: " << Name;
	cout << "\ngay thang nam sinh: " << Ngay << "/" << Thang << "/" << Nam;
}