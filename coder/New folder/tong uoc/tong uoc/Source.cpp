#include <iostream>
using namespace std;
void DemGa(int k, int t) {
	int ga;
	if (k >= t)
		ga = k;
	else if (k < t) {
		int n = t / k;
		ga = t - k * n - n;
	}
	cout << ga;
}
int main() {
	int k, t;
	cout << "nhap so ga: ";
	cin >> k;
	cout << "nhap thoi gian tren tau: ";
	cin >> t;
	DemGa(k, t);
	system("pause");
	return 0;
}