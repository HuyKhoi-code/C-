#include <iostream>
using namespace std;
void Merge(int a[], int l, int r, int m) {
	int i, j, k;
	int t = m - l + 1;
	int p = r - m;
	int L[100];
	int R[100];
	for (i = 0; i < t; i++) {
		L[i] = a[l + i];
	}
	for (int j = 0; j < p; j++) {
		R[j] = a[m + 1 + j];
	}
	i = j = 0;
	k = l;
	while (i < t && j < p) {
		if (L[i] < R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < t) {
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < p) {
		a[k] = R[j];
		j++;
		k++;
	}
}
void MergeSort(int a[], int l , int r) {
	if (l < r) {
		int m = (l + r-1) / 2;
		MergeSort(a, l, m);
		MergeSort(a, m + 1, r);
		Merge(a, l, r, m);
	}
}
int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	MergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	system("pause");
	return 0;
}