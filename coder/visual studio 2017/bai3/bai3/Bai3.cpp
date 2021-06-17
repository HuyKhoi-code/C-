// hocsinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
class Hocsinh {
private:
	char MasoHS[8];
	char hoten[30];
	int toan;
	int van;
public:
	void nhap();
	void xuat();
};
void Hocsinh::nhap(){
	cout << "nhap ma so hoc sinh: ";
	fflush(stdin);
	gets_s(MasoHs);
	cout << "nhap ho va ten: ";
	fflush(stdin);
	gets_s( hoten);
	puts(hoten);
	cout << "nhap diem toan: ";
	cin >> toan;
	cout << "nhap diem van: ";
	cin >> van;
}
void Hocsinh::xuat() {
	cout << "ma so hoc sinh: ";
	puts(MasoHS);
	cout << "ho ten hoc sinh: ";
	puts(hoten);
	cout << "diem toan: " << toan;
	cout << "diem van: " << van;
}
int main() {
	Hocsinh c;
	c.nhap();
	c.xuat();
	return 0;
}
