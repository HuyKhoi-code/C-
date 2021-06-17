#include "SoPhuc.h"
using namespace std;
void SoPhuc::nhap() {
	cout << "nhap phan thuc: ";
	cin >> this->thuc;
	cout << "nhap phan ao: ";
	cin >> this->ao;
}
void SoPhuc::xuat() {
	cout << this->thuc << "+" << this->ao << "i" << endl;
}
SoPhuc SoPhuc::Cong(SoPhuc b) {
	SoPhuc c;
	c.thuc = this->thuc + b.thuc;
	c.ao = this->ao + b.ao;
	return c;
}
SoPhuc SoPhuc::Tru(SoPhuc b) {
	SoPhuc c;
	c.thuc = this->thuc - b.thuc;
	c.ao = this->ao - b.ao;
	return c;
}
SoPhuc SoPhuc::Nhan(SoPhuc b) {
	SoPhuc c;
	c.thuc = this->thuc*b.thuc-this->ao*b.ao;
	c.ao = this->thuc*b.ao+this->ao*b.thuc;
	return c;
}
SoPhuc SoPhuc::Chia(SoPhuc b) {
	SoPhuc c;
	c.thuc= float(this->thuc*b.thuc + this->ao*b.ao)/(b.thuc*b.thuc+b.ao*b.ao);
	c.ao = float(this->ao*b.thuc - this->thuc*b.ao) / (b.thuc*b.thuc + b.ao*b.ao);
	return c;
}
