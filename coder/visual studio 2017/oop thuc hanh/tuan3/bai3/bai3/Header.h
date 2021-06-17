#pragma once
#include <iostream>
using namespace std;
class TimeSpan {
private:
	int gio, phut, giay;
public:
	friend istream & operator >>(istream &, TimeSpan &);
	friend ostream & operator <<(ostream &, TimeSpan );
	TimeSpan operator+(TimeSpan &);
	TimeSpan operator-(TimeSpan &);
};