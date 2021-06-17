#include"Header.h"
int main() {
	DaThuc a, b;
	cout << "nhap Da thuc a: ";
	cin >> a;
	cout << "nhap da thuc b: ";
	cin >> b;
	DaThuc c = a + b;
	cout << "tong 2 da thuc: " << c;
	DaThuc d = a - b;
	cout << "\nhieu 2 da thuc: " << d;
	system("pause");
	return 0;
}