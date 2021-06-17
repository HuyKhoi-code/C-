#include "GiaSuc.h"
GiaSuc::GiaSuc(void){}
GiaSuc::~GiaSuc(void){}
void GiaSuc::nhap() {
	cout << "\nnhap so luong: ";
	cin >> SoLuong;
}
void GiaSuc::Sua(){}
int GiaSuc::LaySua() {
	return Milk;
}
int  GiaSuc::SoConDuocSinhRa() {
	{
		int S = 0;
		for (int i = 0; i < SoLuong; i++)
		{
			S += rand() % 10 + 0;
		}
		return S;
	}
}
void GiaSuc::Voice(){}
void GiaSuc::xuat() {
	int a = GiaSuc::LaySua();
	int b = GiaSuc::SoConDuocSinhRa();
	cout << "\nso luong sua thu dc: " << a;
	cout << "\nso luong con dc sinh ra trong 1 lua: " << b;
}