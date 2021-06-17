#pragma once
#include "Nhanvien.h"
class NhanVienVP : public NhanVien {
protected:
	int WorkDay;
public:
	NhanVienVP(void);
	~NhanVienVP(void);
	virtual void nhap();
	virtual void xuat();
	virtual long Luong();
};
