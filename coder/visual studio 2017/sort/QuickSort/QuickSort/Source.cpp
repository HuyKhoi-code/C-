#include <iostream>
using namespace std;
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
}
void Quickly(int a[],int l, int r,int n) {
	int x = a[(l + r) / 2 ];
	int i = l;
	int j = r;
	while (i <= j) {
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
			cout << "i= " << i << "; j= " << j<<" : ";
			xuat(a, n);
			cout << endl;
			i++;
			j--;
		}
	}
	if (l < j)
		Quickly(a, l, j,n);
	if (i < r)
		Quickly(a, i, r,n);
}
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int main() {
	int n;
	cin >> n;
	int a[100];
	nhap(a, n);
	Quickly(a, 0, n - 1,n);
	//xuat(a, n);
	system("pause");
	return 0;
}