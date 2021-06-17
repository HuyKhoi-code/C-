#include "GiaSuc.h"
#include "Cow.h"
#include "GOAT.h"
#include "LAMP.h"
int main() {
	GiaSuc**a = new GiaSuc*[3];
	int t;
		cout << "cac thanh phan gia suc: 1-Bo 2-De 3-Cuu";
		for (int i = 0; i < 3; i++) {
			cin >> t;
			if (t == 1) {
				a[i] = new Cow;
				cout << "thong tin ve con bo: ";
			}
			if (t == 2) {
				a[i] = new Goat;
				cout << "thong tin ve de: ";
			}
			if (t == 3) {
				a[i] = new Lamp;
				cout << "thong tin ve cuu: ";
			}

			a[i]->nhap();
			a[i]->Sua();
			a[i]->LaySua();
			a[i]->Voice();
			a[i]->xuat();
	}
	return 0;
}