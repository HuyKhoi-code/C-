#include "Candidate.h"
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap so luong thi sinh: ";
	cin >> n;
	Candidate a[100];
	for (int i = 0; i < n; i++) {
		a[i].Nhap();
	}
	/*for (int i = 0; i < n; i++)
		a[i].Xuat();*/
	cout << "\nthi sinh co tong diem lon hon 15: ";
	for (int i = 0; i < n; i++)
	{
		a[i].Tongdiemlonhon15();
	}
	system("pause");
	return 0;
}