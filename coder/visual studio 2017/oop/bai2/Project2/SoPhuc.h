#pragma once
#include <iostream>
using namespace std;
class SoPhuc {
private:
    float  thuc, ao;
public:
	void nhap();
	void xuat();
	SoPhuc Cong(SoPhuc b);
	SoPhuc Tru(SoPhuc b);
	SoPhuc Nhan(SoPhuc b);
	SoPhuc Chia(SoPhuc b);
};