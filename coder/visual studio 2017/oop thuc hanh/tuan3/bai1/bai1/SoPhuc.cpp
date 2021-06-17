#include "Header.h"
using namespace std;
istream & operator >>(istream &in, SoPhuc &a) {
	cout << "nhap phan thuc: ";
	in >> a.Thuc;
	cout << " nhap phan ao: ";
	in >> a.Ao;
	return in;
}
ostream & operator <<(ostream &out, SoPhuc a) {
	out << "nhap so phuc: ";
	out << a.Thuc << "+" << a.Ao << "i" << endl;
	return out;
}
SoPhuc SoPhuc::operator+(SoPhuc &b) {
	SoPhuc c;
	c.Thuc = this->Thuc + b.Thuc;
	c.Ao = this->Ao + b.Ao;
	return c;
}
SoPhuc SoPhuc::operator-(SoPhuc &b) {
	SoPhuc c;
	c.Thuc = this->Thuc - b.Thuc;
	c.Ao = this->Ao - b.Ao;
	return c;
}
SoPhuc SoPhuc::operator*(SoPhuc & b) {
	SoPhuc c;
	c.Thuc = this->Thuc*b.Thuc - this->Ao*b.Ao;
	c.Ao = this->Thuc*b.Ao + this->Ao*b.Thuc;
	return c;
}
SoPhuc SoPhuc::operator/(SoPhuc &b) {
	SoPhuc c;
	c.Thuc = float(this->Thuc*b.Thuc + this->Ao*b.Ao) / (b.Thuc*b.Thuc + b.Ao*b.Ao);
	c.Ao = float(this->Ao*b.Thuc - this->Thuc*b.Ao) / (b.Thuc*b.Thuc + b.Ao*b.Ao);
	return c;
}
int SoPhuc::operator==(SoPhuc &b) {
	if (this->Thuc == b.Thuc&&this->Ao == b.Ao)
		return 1;
}
int SoPhuc::operator!=(SoPhuc &b) {
	if (this->Thuc != b.Thuc || this->Ao != b.Ao)
		return 1;
}

