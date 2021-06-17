#include "Header.h"
using namespace std;
int main() {
	PhanSo a, b, c;
	cin >> a;
	cin >> b;
	cout << a << b;
	if (a.operator==(b) == 1)
		cout << "2 phan so bang nhau";
	if (a.operator!=(b) == 1)
		cout << "2 phan so khac nhau";
	cout << "\ntong 2 phan so: ";
	c = a.operator+(b);
	cout << c;
	cout << "\nhieu 2 phan so: ";
	c = a.operator-(b);
	cout << c;
	cout << "\ntich 2 phan so: ";
	c = a.operator*(b);
	cout << c;
	cout << "\nthuong 2 phan so: ";
	c = a.operator/(b);
	cout << c;
	system("pause");
	return 0;
}