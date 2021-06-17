#include"Header.h"
using namespace std;

int main(){
	TamGiac t, kq;
	float n, m;
	int a;
	Diem b, k;
    t.Nhap();
	t.Xuat();
	kq = t.PhongTo(n);
	cout << "toa do cua cac dinh sau khi phong to la:" << endl;
	kq.Xuat();
	kq = t.ThuNho(m);
	cout << "toa do cua cac dinh sau khi thu nho la:" << endl;
	kq.Xuat();
	kq = t.TinhTien(k);
	cout << "toa do cua cac dinh sau khi tinh tien la:" << endl;
	kq.Xuat();
	kq = t.Quay(a, b);
	cout << "toa do cua cac dinh sau khi quay la:" << endl;
	kq.Xuat();
	system("pause");
	return 0;
}