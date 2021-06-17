#include <iostream>
using namespace std;
int  TimKiem(int a[], int n, int x) {
	a[n] = x;
	int i = 0;
	while (a[i] != x) 
		i++;
	if (i < n)
		return  i;
	else
		return -1;
}
int main() {
	int n;
	cout << "nhap so luong phan tu: ";
	cin >> n;
	int *a=new int [n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x; 
	cin >> x;
	int t=TimKiem(a, n, x);
	cout << t;
	system("pause ");
	return 0;
}