#pragma once
#include <string>
using namespace std;
struct ThongTin {
	int MaSo;
	string Name;
	int Ngay, Thang, Nam;
	float Toan, Van, Anh;
};
class Candidate{
private:
	ThongTin a;
public:
	void Nhap();
	void Xuat();
	void Tongdiemlonhon15();
};

