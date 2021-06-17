#include <iostream>
using namespace std;
int N=0;
void push(int a[],int n) {
	N = N + 1;
	int i = N;
	a[i] = n;
	if (i > 1 && a[i / 2] > a[i]) {
		swap(a[i / 2], a[i]);
		i = i / 2;
	}
}
void Min(int a[], int i) {
	int min;
	int j = i * 2;
	int k = j + 1;
	if (j <= N && a[j] < a[i]) {
		min = j;
	}
	else
		min = i;
	if (k <= N && a[k] < a[min]) {
		min = k;
	}
	if (min != i) {
		swap(a[i], a[min]);
		Min(a, min);
	}
}
void pop(int a[]) {
	cout << a[1];
	a[1] = a[N];
	N = N - 1;
	Min(a, 1);
}
void nhap(int arr[]) {
	int a,n;
	while (1 < 2) {
		cin >> a;
		if (a == 1) {
			
			cin >> n;
			push(arr, n);
		}
		if (a == 2) {
			pop(arr);
		}
		if (a == 0)
			exit(1);
	}
}
int main() {
	int arr[100];
	nhap(arr);
	system("pause");
	return 0;
}