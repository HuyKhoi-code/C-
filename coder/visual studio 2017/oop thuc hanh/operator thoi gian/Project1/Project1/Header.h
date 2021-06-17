#pragma once
#include <iostream>
using namespace std;
class Time {
private:
	int h, p, s;
public:
	Time() {
		h = 0;
		p = 0;
		s = 0;
	}
	Time(int a, int b, int c) {
		h = a;
		if (a < 0 || a>23)
			h = 0;
		if (b < 0 || b>59)
			b = 0;
		if (c < 0 || c>59)
			c = 0;
	}
	~Time() {};
	friend istream & operator>>(istream &is, Time &t) {
			cout << "nhap gio: ";
			is >> t.h;
			cout << "nhap phut: ";
			is >> t.p;
			cout << "nhap giay: ";
			is >> t.s;
		return is;
	}
	friend ostream & operator<<(ostream &os, Time &t) {
		os << t.h << ":" << t.p << ":" << t.s<<endl;
		return os;
	}
	Time operator+(Time &t) {
		Time k;
		k.h = t.h + this->h;
		k.p = t.p + this->p;
		k.s = t.s + this->s;
		if (k.s > 60) {
			k.p = k.p + k.s / 60;
			k.s = k.s - (k.s / 60) * 60;
		}
		if (k.p > 60) {
			k.h = k.h + k.p / 60;
			k.p = k.p - (k.p / 60) * 60;
		}
		return k;
	}
};
