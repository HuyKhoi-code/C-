#include"Phanso.h"
int main() {
	PhanSo a, b, c, d;
	cout << "nhap cac phan so: ";
	cin >> a >> b>>c;
	d = a * b + c;
	cout << "tong 2 phan so: ";
	cout << d.RutGon();
	system("pause");
	return 0;
}