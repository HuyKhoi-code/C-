
#include "Header.h"
using namespace std;
int main() {
	Phanso a;
	Phanso b;
	Phanso c;
	a.Nhap();
	a.DinhGT();
	b.Nhap();
	b.DinhGT();
	c=a.Cong(b);
	c.Xuat();
	c = a.Tru(b);
	c.Xuat();
	c = a.Nhan(b);
	c.Xuat();
	c = a.Chia(b);
	c.Xuat();
	system("pause");
	return 0;
}