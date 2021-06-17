#include <iostream>
using namespace std;
class Thoigian {
private:
	int gio, phut, giay;
public:
	void nhap();
	void xuat();
	void cong();
};
Thoigian a;
Thoigian b;
Thoigian c;
void Thoigian::nhap() {
	cout << "nhap gio: ";
	cin >> this->gio;
	cout << "nhap phut: ";
	cin >> this->phut;
	cout << "nhap giay: ";
	cin >> this->giay;
}
void Thoigian::xuat() {
	cout << this->gio << "/" << this->phut << "/" << this->giay << endl;
}
void Thoigian::cong() {
	c.gio = a.gio + b.gio;
	c.phut = a.phut + b.phut;
	if (a.phut + b.phut >= 60) {
		c.gio = c.gio + 1;
		c.phut = c.phut - 60;
	}
	c.giay = a.giay + a.giay;
	if (c.giay >= 60) {
		c.phut++;
		c.giay = c.giay - 60;
	}
	c.xuat();
}
int main() {
	Thoigian c;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	c.cong();
	system("pause");
	return 0;
}