#include <iostream>
using namespace std;
void SapXep(int a[],int n, int x) {
	int max = 0;
	int min = n - 1;
	while (max < min) {
		int m = (max + min) / 2;
		if (x == a[m])
			cout << m;
		if (x > a[m]) {
			min = m-1;
		}
		if (x<a[m])
			max = m+1;
	}
	
}
int main() {
	int n;
	cout << "nhap so luong phan tu: ";
	cin >> n;
	int *a=new int [n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x;
	cout << "nhap so can tim: ";
	cin >> x;
	cout << "vi tri cua x: ";
	SapXep(a, n, x);
	system("pause");
	return 0;
}