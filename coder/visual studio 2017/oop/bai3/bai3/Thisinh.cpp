#include <string>
#include <stdio.h>
#include <iostream>
#include "Candidate.h"
using namespace std;
void Candidate::Nhap() {
	cout << "\nnhap ma so thi sinh: ";
	cin >> a.MaSo;
	cout << "nhap ten thi sinh: ";
	cin.ignore();
	getline(cin, a.Name);
	cout << "nhap ngay thang nam sinh: ";
	cin >> a.Ngay >> a.Thang >> a.Nam;
	cout << "nhap diem thi sinh: ";
	cin >> a.Toan >> a.Van >> a.Anh;
}
void Candidate::Xuat() {
	cout << "\nma so thi sinh: " << a.MaSo;
	cout << "\nHo ten thi sinh: " << a.Name;
	cout << "\nngay thang nam sinh: " << a.Ngay << "/" << a.Thang << "/" << a.Nam;
	cout << "\ndiem cua thi sinh: ";
	cout << "\tToan: " << a.Toan << "\tVan: " << a.Van << "\tAnh: " << a.Anh;
	cout << endl;
}
void Candidate::Tongdiemlonhon15() {
	if ((a.Toan + a.Van + a.Anh) > 15) {
		cout << a.Name;
	}
}
