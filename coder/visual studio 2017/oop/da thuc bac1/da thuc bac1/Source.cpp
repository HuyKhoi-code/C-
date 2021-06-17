#include"DaThuc.h"
int main() {
	DaThuc X,Y,Z;
	X.nhap();
	Y.nhap();
	X.ptbac1();
	Z = X.operator+(Y);
	Z.xuat();
	system("pause");
	return 0;
}