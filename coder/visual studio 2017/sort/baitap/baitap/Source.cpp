#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;
struct Computer {
	string Name;
	int Speed;
	int Price;
};
void Nhap1(Computer &a) {
	cout << "nhap nhan hieu may tinh:";
	cin.ignore();
	getline(cin, a.Name);
	cout << "nhap toc do xu ly: ";
	cin >> a.Speed;
	cout << "nhap gia ban: ";
	cin >> a.Price;
}
void xuat1(Computer a) {
	cout << "\nnhan hieu: " << a.Name;
	cout << "\ntoc do xu ly: " << a.Speed;
	cout << "\ngia ban: " << a.Price;
	cout << endl;
}
void nhap(Computer a[], int n) {
	for (int i = 0; i < n; i++) {
		Nhap1(a[i]);
	}
}
void xuat(Computer a[], int n) {
	cout << "------------------------";
	for (int i = 0; i < n; i++) {
		xuat1(a[i]);
	}
}
void sortbyName(Computer a[],int n){
	for (int i = 0; i < n; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (a[max].Name < a[j].Name)
				max = j;
			swap(a[max], a[i]);
		}
	}
	xuat(a, n);
}
void sortbySpeed(Computer a[],int n) {
	for (int i = 0; i < n; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (a[max].Speed > a[j].Speed)
				max = j;
			swap(a[max],a[i]);
		}
	}
	xuat(a, n);
}
void sort(Computer a[], int n) {
	for (int i = 0; i < n; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (a[max].Price > a[j].Price)
				max = j;
			if (a[max].Price == a[j].Price) {
				if (a[max].Speed < a[j].Speed)
					max = j;
			}
			swap(a[max], a[i]);
		}
	}
	xuat(a, n);
}
void filter(Computer a[],int n) {
	int p1, p2, s1, s2;
	cout << "nhap khoang gia tri toc do: ";
	cin >> p1 >> p2;
	cout << "nhap khoang gia tri gia ban: ";
	cin >> s1 >> s2;
	for (int i = 0; i < n; i++) {
		if (p1<a[i].Speed && p2> a[i].Speed) {
			if (s1<a[i].Price && s2>a[i].Price)
				xuat1(a[i]);
		}
	}
}
int main() {
	int n;
	cin >> n;
	Computer a[100];
	nhap(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}