#include"people.h"
#include"Artist.h"
#include"Purpil.h"
#include "Singer.h"
#include"Student.h"
#include"Worker.h"
int main() {
	int t, n;
	cout << "nhap so luong doi tuong: ";
	cin >> n;
	People **a = new People*[n];
	cout << "cac loai doi tuong: 1-nghe si 2-hocsinh 3-casi 4-sinhvien 5-congnhan";
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t == 1) {
			a[i] = new Artist;
		}
		if (t == 2)
			a[i] = new Purpil;
		if (t == 3)
			a[i] = new Singer;
		if (t == 4)
			a[i] = new Student;
		if (t == 5)
			a[i] = new Worker;
		a[i]->Nhap();
		
	}
	for (int i = 0; i < n; i++)
		a[i]->xuat();
	system("pause");
	return 0;
}