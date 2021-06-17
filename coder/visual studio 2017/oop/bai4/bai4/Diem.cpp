#include <iostream>
#include "ToaDo.h"
using namespace std;
void Diem::nhap() {
	cout << "nhap hoanh do: ";
	cin >> this->HoanhDo;
	cout << "nhap tung do: ";
	cin >> this->TungDo;
}
void Diem::xuat() {
	cout << this->HoanhDo << "," << this->TungDo;
}
void Diem::TinhTien(int a, int b) {
	this->HoanhDo = this->HoanhDo + a;
	this->TungDo = this->TungDo + b;
}
void Diem::Exchange() {
	int t;
	t = this->HoanhDo;
	this->HoanhDo = this->TungDo;
	this->TungDo = t;
}