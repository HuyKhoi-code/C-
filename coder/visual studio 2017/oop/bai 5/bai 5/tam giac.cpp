#include"Header.h"
#include <math.h>
using namespace std;

void Diem::Nhap(){
	cout << "nhap hoanh do: ";
	cin >> this->HoanhDo;
	cout << "nhap tung do: ";
	cin >> this->TungDo;
}
void Diem::Xuat(){
	cout << "(" << this->HoanhDo << "," << this->TungDo << ")" << endl;
}
Diem Diem::TinhTien(Diem &a){
	Diem d;
	d.HoanhDo = this->HoanhDo + a.HoanhDo;
	d.TungDo = this->TungDo + a.TungDo;
	return d;
}
Diem Diem::Quay(int&a, Diem &b){
	Diem d;
	d.HoanhDo = (this->HoanhDo - b.HoanhDo)*cos(a) - (this->TungDo - b.HoanhDo)*sin(a) + b.HoanhDo;
	d.TungDo = (this->HoanhDo - b.HoanhDo)*sin(a) + (this->TungDo - b.HoanhDo)*cos(a) + b.TungDo;
	return d;
}
Diem Diem::Nhan(float &a){
	Diem d;
	d.HoanhDo = this->HoanhDo*a;
	d.TungDo = this->TungDo*a;
	return d;
}
Diem Diem::Chia(float &a){
	Diem d;
	d.HoanhDo = this->HoanhDo / a;
	d.TungDo = this->TungDo / a;
	return d;
}
void TamGiac::Nhap(){
	cout << "nhap toa do dinh A" << endl;
	A.Nhap();
	cout << "nhap toa do dinh B" << endl;
	B.Nhap();
	cout << "nhap toa do dinh C" << endl;
	C.Nhap();
}
void TamGiac::Xuat(){
	cout << "A";
	A.Xuat();
	cout << "B";
	B.Xuat();
	cout << "C";
	C.Xuat();
}
TamGiac TamGiac::TinhTien(Diem &a){
	cout << "nhap toa do vecto:" << endl;
	a.Nhap();
	TamGiac kq;
	kq.A = this->A.TinhTien(a);
	kq.B = this->B.TinhTien(a);
	kq.C = this->C.TinhTien(a);
	return kq;
}
TamGiac TamGiac::Quay(int &a, Diem &b){
	cout << "nhap goc can xoay:(radian)" << endl;
	cin >> a;
	cout << "nhap toa do diem xoay quanh:" << endl;
	b.Nhap();
	TamGiac t;
	t.A = this->A.Quay(a, b);
	t.B = this->B.Quay(a, b);
	t.C = this->C.Quay(a, b);
	return t;
}
TamGiac TamGiac::PhongTo(float & a){
	cout << "nhap ti le phong to:";
	cin >> a;
	TamGiac t;
	t.A = this->A.Nhan(a);
	t.B = this->B.Nhan(a);
	t.C = this->C.Nhan(a);
	return t;
}
TamGiac TamGiac::ThuNho(float & a){
	cout << "nhap ti le thu nho:";
	cin >> a;
	TamGiac t;
	t.A = this->A.Chia(a);
	t.B = this->B.Chia(a);
	t.C = this->C.Chia(a);
	return t;
}