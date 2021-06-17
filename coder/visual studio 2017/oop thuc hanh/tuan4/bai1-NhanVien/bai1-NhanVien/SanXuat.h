#pragma once
#include "Nhanvien.h"
class NhanVienSX : public NhanVien {
protected:
	long LuongCanBan;
	int SoSP;
public:
	NhanVienSX(void);
	~NhanVienSX(void);
	virtual void nhap();
	virtual void xuat();
	virtual long Luong();
};
