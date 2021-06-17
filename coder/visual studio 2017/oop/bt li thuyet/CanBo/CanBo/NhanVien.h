#pragma once
#include"CanBo.h"
class NhanVien : public CanBo {
protected:
	int PhongBan;
	int SoNgayCong;
	int ChucVu;
public:
	NhanVien() {};
	~NhanVien() {};
	virtual void nhap();
	virtual void xuat();
	virtual void Luong();
	bool Gv();
};
