#include <iostream>
using namespace std;
void CreateHeap(int a[],int k, int n) {
		int j = 2 * k + 1;
		while (j < n) {
			if (j + 1 < n) {
				if (a[j] < a[j + 1])
					j = j + 1;
			}
			if (a[k] >= a[j])
				return ;
			swap(a[k], a[j]);
			k = j;
			j = 2 * k + 1;
			
		}
}
void Heap(int a[], int n) {
	for (int i = n/2-1; i >= 0; i--) {
		CreateHeap(a, i, n);
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void HeapSort(int a[], int n) {
	Heap(a, n);
	xuat(a, n);
	cout << endl;
	int t = n;
	while (n > 0) {
		n=n-1;
		if (a[0] > a[n])
			swap(a[0], a[n]);
		CreateHeap(a, 0, n);
		xuat(a, t);
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	HeapSort(a, n);
	system("pause");
	return 0;
}