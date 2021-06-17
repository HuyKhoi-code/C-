#include"Header.h"
using namespace std;
int main() {
	SoPhuc a;
	SoPhuc b;
	SoPhuc c;
	cin >> a;
	cin >> b;
	cout << a << b;
	if (a.operator==(b) == 1)
		cout << "\n 2 so phuc bang nhau";
	if (a.operator!=(b) == 1)
		cout << "\n 2 so phuc khac nhau";
	cout << "\ntong 2 so phuc: ";
	c=a.operator+(b);
	cout << c;
	cout << "\nhieu 2 so phuc: ";
	c = a.operator-(b);
	cout << c;
	cout << "\ntich2 so phuc: ";
	c = a.operator*(b);
	cout << c;
	cout << "\nthuong 2 so phuc:";
	c = a.operator/(b);
	cout << c;
	
	system("pause ");
	return 0;
}