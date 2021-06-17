#pragma once
#include <iostream>
#include<string>
using namespace std;
class People {
protected:
	string Name;
	int Ngay, Thang, Nam;
public:
	People();
	~People();
	virtual void Nhap();
	virtual void xuat();
};

