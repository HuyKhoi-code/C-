#include"Cow.h"
Cow::Cow(void){}
Cow::~Cow(void) {}
void Cow::Sua() {
	int dem;
	int a=0;
	for (int i = 0; i < SoLuong; i++) {
		dem = rand() % 21 + 0;
		a += dem;
	}
	Milk = a;
}
void Cow::Voice() {
	cout << "tieng keu: um booo";
}