#pragma once
#include <iostream>
using namespace std;
class DaThuc {
private:
	int *CoSo;
	int SoMu;
public:
	DaThuc() {
		SoMu = 0;
		CoSo = NULL;
	}
	DaThuc(int n) {
		SoMu = n;
		CoSo = new int[n];
	}
	friend istream & operator>>(istream &is, DaThuc &a) {
		cout << "nhap so mu: ";
		is>> a.SoMu;
		a.CoSo = new int[a.SoMu + 1];
		cout << "nhap co so: ";
		for (int i = 0; i <= a.SoMu; i++) {
			cout << "x^" << i<<" ";
			is >> a.CoSo[i];
		}
		return is;
	}
	friend ostream &operator<<(ostream &os, DaThuc &a) {
		os << "da thuc: ";
		for (int i = a.SoMu; i >= 0; i--) {
			if (i != a.SoMu)
				os << "+";
			os << a.CoSo[i] << "x^" << i;
			
		}
		return os;
	}
	DaThuc operator+(DaThuc &a) {
		int nmax;
		int nmin;
		if (this->SoMu > a.SoMu) {
			nmax = this->SoMu;
			nmin = a.SoMu;
		}
		else {
			nmax = a.SoMu;
			nmin = this->SoMu;
		}
		DaThuc sum(nmax);
		for (int i = nmax; i > nmin; i--) {
			if (this->SoMu == nmax)
				sum.CoSo[i] = this->CoSo[i];
			else
				sum.CoSo[i] = a.CoSo[i];
		}
		for (int i = 0; i <=nmin; i++) {
			sum.CoSo[i] = this->CoSo[i] + a.CoSo[i];
		}
		return sum;
	}
	DaThuc operator-(DaThuc &a) {
		int nmax;
		int nmin;
		if (this->SoMu > a.SoMu) {
			nmax = this->SoMu;
			nmin = a.SoMu;
		}
		else {
			nmax = a.SoMu;
			nmin = this->SoMu;
		}
		DaThuc sub(nmax);
		for (int i = nmax; i > nmin; i--) {
			if (this->SoMu == nmax)
				sub.CoSo[i] = this->CoSo[i];
			else
				sub.CoSo[i] = a.CoSo[i];
		}
		for (int i = 0; i <= nmin; i++) {
			if (i != sub.CoSo[i])
			sub.CoSo[i] = this->CoSo[i] - a.CoSo[i];
		}
		return sub;
	}
};
