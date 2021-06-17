#include "SoPhuc.h"
using namespace std;
int main() {
	SoPhuc a;
	SoPhuc b;
	SoPhuc c;
	a.nhap();
	b.nhap();
	c = a.Cong(b);
	c.xuat();
	c = a.Tru(b);
	c.xuat(); 
	c = a.Nhan(b);
	c.xuat();
	c = a.Chia(b);
	c.xuat();
	system("pause");
	return 0;
}