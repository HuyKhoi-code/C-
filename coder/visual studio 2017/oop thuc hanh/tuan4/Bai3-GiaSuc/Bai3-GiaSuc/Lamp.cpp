#include "LAMP.h"
Lamp::Lamp(void){}
Lamp::~Lamp(void){}
void Lamp::Sua() {
	int dem;
	int a = 0;
	for (int i = 0; i < SoLuong; i++) {
		dem = rand() % 11 + 0;
		a += dem;
	}
	Milk = a;
}
void Lamp::Voice() {
	cout << "tieng keu: BEEE BEEE ";
}