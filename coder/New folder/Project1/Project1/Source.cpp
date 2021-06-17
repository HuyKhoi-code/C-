#include <iostream>
using namespace std;
int main() {
	int a, b, min;
	cout << "nhap: ";
	cin >> a >> b;
	if (a < b)
		min = a;
	else
		min = b;
	for (int i = 1; i < min; i++) {
			if ((a%i == 0)&&(b%i == 0))
				cout << i;
	}
	system("pause");
	return 0;
}