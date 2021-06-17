#include "GOAT.h"
Goat::Goat(void){}
Goat::~Goat(void){}
void Goat::Sua() {
	int dem;
	int a = 0;
	for (int i = 0; i < SoLuong; i++) {
		dem = rand() % 6 + 0;
		a += dem;
	}
	Milk = a;
}
void Goat::Voice() {
	cout << "tieng keu: deee deee";
}