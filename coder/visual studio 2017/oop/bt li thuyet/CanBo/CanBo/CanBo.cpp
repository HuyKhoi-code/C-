#include"CanBo.h"
void CanBo::nhap() {
	cout << "nhap ho va ten can bo: ";
	cin.ignore();
	getline(cin, Name);
	cout << "he so luong: ";
	cin >> HeSoLuong;
}
void CanBo::xuat() {
	cout << "\nho ten can bo: " << Name;
	cout << "\nhe so luong: " << HeSoLuong;
}
long CanBo::LuongCanBo() {
	return LuongCB;
}
void CanBo::Luong() {

}
bool CanBo::Gv() {
	return false;
}
