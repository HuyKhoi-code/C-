#pragma once
#include"people.h"
class Student : public People {
private:
	int MSSV;
	string Truong;
public:
	Student();
	~Student();
	void Nhap();
	void xuat();
};
