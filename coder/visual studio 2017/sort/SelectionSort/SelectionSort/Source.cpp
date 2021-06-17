#include <iostream>
using namespace std;
void SelectionSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++) {
			if (a[max] < a[j])
				max = j;
			swap(a[max], a[i]);
		}
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i];
}
int main() {
	int n; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	SelectionSort(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}