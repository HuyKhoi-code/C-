#include"Header.h"
using namespace std;
int main(){
	DaGiac dg, kq;
    dg.Nhap();
	dg.Xuat();
	kq = dg.PhongTo();
	cout << "toa do cua cac dinh sau khi phong to :" << endl;
	kq.Xuat();
	kq = dg.ThuNho();
	cout << "toa do cua cac dinh sau khi thu nho: " << endl;
	kq.Xuat();
	kq = dg.TinhTien();
	cout << "toa do cua cac dinh sau khi tinh tien :" << endl;
	kq.Xuat();
	kq =dg.Quay();
	cout << "toa do cua cac dinh sau khi quay :" << endl;
	kq.Xuat();
	system("pause");
	return 0;
}