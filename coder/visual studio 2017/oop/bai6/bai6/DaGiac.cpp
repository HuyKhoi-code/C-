#include"Header.h"
using namespace std;
void Diem::Nhap(){
	cout << "nhap hoanh do: ";
	cin >> this->HoanhDo;
	cout << "nhap tung do: ";
	cin >> this->TungDo;
}
void Diem::Xuat(){
	cout << this->HoanhDo << "," << this->TungDo << endl;
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
Diem Diem::Nhan(float &n){
	Diem d;
	d.HoanhDo = this->HoanhDo*n;
	d.TungDo = this->TungDo*n;
	return d;
}
Diem Diem::Chia(float &n){
	Diem d;
	d.HoanhDo = this->HoanhDo / n;
	d.TungDo = this->TungDo / n;
	return d;
}
void DaGiac::Nhap(){
	cout << "nhap so dinh cua da giac:";
	cin >> this->SoDinh;
	this->A = new Diem[this->SoDinh];
	for (int i = 0; i < this->SoDinh; i++)
	{
		cout << "nhap toa do cua dinh thu " << i + 1 << ":" << endl;
		this->A[i].Nhap();
	}
}
void DaGiac::Xuat(){
	for (int i = 0; i < this->SoDinh; i++)
	{
		this->A[i].Xuat();
		cout << endl;
	}
}
DaGiac DaGiac::TinhTien(){
	Diem b;
	cout << "nhap toa do vecto:" << endl;
	b.Nhap();
	DaGiac dg;
	dg.SoDinh = this->SoDinh;
	dg.A = new Diem[dg.SoDinh];
	for (int i = 0; i < dg.SoDinh; i++)
	{
		dg.A[i] = this->A[i].TinhTien(b);
	}
	return dg;
}
DaGiac DaGiac::Quay(){
	int c;
	cout << "nhap goc can quay:(radian)" << endl;
	cin >> c;
	Diem b;
	cout << "nhap toa do diem de quay:" << endl;
	b.Nhap();
	DaGiac dg;
	dg.SoDinh = this->SoDinh;
	dg.A = new Diem[dg.SoDinh];
	for (int i = 0; i < dg.SoDinh; i++)
	{
		dg.A[i] = this->A[i].Quay(c, b);
	}
	return dg;
}
DaGiac DaGiac::PhongTo(){
	float m;
	cout << "nhap ti le can phong to:";
	cin >> m;
	DaGiac dg;
	dg.SoDinh = this->SoDinh;
	dg.A = new Diem[dg.SoDinh];
	for (int i = 0; i < dg.SoDinh; i++)
	{
		dg.A[i] = this->A[i].Nhan(m);
	}
	return dg;
}
DaGiac DaGiac::ThuNho(){
	float m;
	cout << "nhap ti le can thu nho:";
	cin >> m;
	DaGiac dg;
	dg.SoDinh = this->SoDinh;
	dg.A = new Diem[dg.SoDinh];
	for (int i = 0; i < dg.SoDinh; i++)
	{
		dg.A[i] = this->A[i].Chia(m);
	}
	return dg;
}