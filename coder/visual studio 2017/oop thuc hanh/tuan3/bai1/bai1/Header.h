#pragma once
#include <iostream>
using namespace std;
class SoPhuc {
private:
	int Thuc, Ao;
public:
	SoPhuc() {
		int Thuc;
		int Ao = 0;
	}
	friend istream & operator >>(istream &,SoPhuc &);
	friend ostream & operator <<(ostream &, SoPhuc );
	SoPhuc operator+ (SoPhuc &);
	SoPhuc operator-(SoPhuc &);
	SoPhuc operator * (SoPhuc &); 
	SoPhuc operator / (SoPhuc &);
	int  operator ==(SoPhuc &);
	int  operator!=(SoPhuc &);
};
