#include <iostream>
#include <math.h>
using namespace std;
struct Diem {
	int HoanhDo;
	int TungDo;
};
void NhapDiem(Diem &a) {
	cout << "nhap hoanh do: ";
	cin >> a.HoanhDo;
	cout << "nhap tung do: ";
	cin >> a.TungDo;
}
void Nhap(Diem a[], int n) {
	for (int i = 0; i < n; i++) {
		NhapDiem(a[i]);
	}
}
float KhoangCach(Diem a, Diem b) {
	float d;
	int h = a.HoanhDo - b.HoanhDo;
	int t = a.TungDo - b.TungDo;
	d = sqrt(h*h + t * t);
	return d;
}
void xuat(Diem a) {
	cout << a.HoanhDo << "," << a.TungDo;
}
void KhoangCachMin(Diem a[], Diem q, int n) {
	float t = KhoangCach(a[0], q);
	for (int i = 1; i < n; i++) {
		if (KhoangCach(a[i], q) < t) {
			t = KhoangCach(a[i], q);
		}
	}
	for (int i = 0; i < n; i++) {
		if (KhoangCach(a[i], q) == t)
			xuat(a[i]);
	}
}
int main() {
	int n;
	cout << "nhap so luong diem: ";
	cin >> n;
	Diem a[100];
	Nhap(a, n);
	Diem q;
	cout << "nhap diem q: ";
	NhapDiem(q);
	KhoangCachMin(a, q, n);
	system("pause");
	return 0;
}