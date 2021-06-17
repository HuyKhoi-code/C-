#include"GiangVien.h"
void GiangVien::nhap() {
	cout << "trinh do giang vien:1-Cu nhan 2-Thac si 3-Tien si";
	cin >> TrinhDo;
	CanBo::nhap();
	cout << "khoa dang day: ";
	cin.ignore();
	getline(cin, Khoa);
	cout << "so tiet day: ";
	cin >> SoTietDay;
}
void GiangVien::xuat() {
	cout << "\ntrinh do giang vien: ";
	if (TrinhDo == 1)
		cout << "Cu nhan";
	if (TrinhDo == 2)
		cout << "Thac si";
	if (TrinhDo == 3)
		cout << "tien si";
	CanBo::xuat();
	cout << "\nso tiet day cua can bo: " << SoTietDay;
	cout << "\nkhoa cua giang vien: " << Khoa;
	
	
}
void GiangVien::Luong() {
	if (TrinhDo == 1) {
		PhuCap = 300;
		LuongCB = HeSoLuong * 730 + PhuCap + SoTietDay * 45;
	}
	if (TrinhDo == 2) {
		PhuCap = 500;
		LuongCB = HeSoLuong * 730 + PhuCap + SoTietDay * 45;
	}
	if (TrinhDo == 3) {
		PhuCap = 1000;
		LuongCB = HeSoLuong * 730 + PhuCap + SoTietDay * 45;
	}
	
}
bool GiangVien::Gv() {
	return true;
}