#include <iostream>
#include "ToaDo.h"
using namespace std;
int main() {
	Diem a;
	int x, y;
	a.nhap();
	cout << "nhap gia tri tinh tien: ";
	cin >> x >> y;
	a.TinhTien(x,y);
	a.Exchange();
	a.xuat();
	system("pause");
	return 0;
}