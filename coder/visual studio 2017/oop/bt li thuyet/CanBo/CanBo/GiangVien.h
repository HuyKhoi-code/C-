#pragma once
#include"CanBo.h"
class GiangVien : public CanBo {
protected:
	string Khoa;
	int SoTietDay;
	int TrinhDo;
	
public:
	GiangVien() {};
	~GiangVien() {};
	virtual void nhap();
	virtual void xuat();
	virtual void Luong();
	bool Gv();
};
