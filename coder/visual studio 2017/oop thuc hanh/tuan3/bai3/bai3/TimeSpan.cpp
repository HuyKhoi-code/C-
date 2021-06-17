#include "Header.h"
using namespace std;

istream & operator >>(istream & in, TimeSpan &a) {
	in >> a.gio >> a.phut >> a.giay;
	return in;
}
ostream & operator << (ostream & os, TimeSpan a) {
	os << "khoang thoi gian: " << a.gio << "/ " << a.phut << "/" << a.giay;
	return os;
}