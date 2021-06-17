#include <iostream>
using namespace std;
void SapXep(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int e = a[i];
		int j=i-1;
		while (j >= 0 && a[j] > e) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = e;
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i];
}
int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i< n; i++)
		cin >> a[i];
	SapXep(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}