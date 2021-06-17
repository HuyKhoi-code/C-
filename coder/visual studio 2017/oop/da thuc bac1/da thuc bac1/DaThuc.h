#pragma once
#include <iostream>
using namespace std;
class DaThuc {
private:
	int a, b;
public:
	DaThuc();
	~DaThuc();
	void nhap();
	void ptbac1();
	void xuat();
	DaThuc operator+(DaThuc X);
};
