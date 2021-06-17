#include "Artist.h"
Artist::Artist() {};
Artist::~Artist() {};
void Artist::Nhap() {
	People::Nhap();
	cout << "so buc tranh da ve: ";
	cin >> Pic;
}
void Artist::xuat() {
	People::xuat();
	cout << "\nso tac pham: " << Pic;
}