#include <pch.h>
#include <iostream>
using namespace std;
class Ngay {
private:
	int ngay;
public:
	void Nhap(int &a);
	void Xuat(int a);
};
void Ngay::Nhap(int &a) {
	cout << "nhap ngay: ";
	cin >> a;
}
void Ngay::Xuat(int a) {
	if (a < 1 && a>31)
		cout << "khong phu hop";
	if (a == 31)
		a = 1;
	else
		a = a++;
	cout << "ngay tiep theo la: " << a;
}
int main() {
	int a;
	Ngay b;
	b.Nhap(a);
	b.Xuat(a);
	return 0;
}