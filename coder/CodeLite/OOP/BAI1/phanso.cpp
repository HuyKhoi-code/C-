#include <stdio.h>
#include <iostream>
using namespace std;
class Phanso{
private:
    int tu;
    int mau;
public:
    void nhap();
    void xuat();
    float Ketqua();
    void Cong();
    void Hieu();
    void Nhan();
};
Phanso a;
Phanso b;
Phanso c;
void Phanso::nhap(){
    
    cout<<"nhap tu so cua phan so: ";
    cin>>tu;
    cout<<"nhap mau so cua phan so: ";
    cin>>mau;
}
void Phanso::xuat(){
    cout<<tu<<"/"<<mau<<endl;
}
float Phanso::Ketqua(){
    float d= float(tu)/mau;
    return d;
}
void Compare(Phanso a, Phanso b){
    cout<<"phan so lon hon la: ";
    if (a.Ketqua()>b.Ketqua())
        a.xuat();
    else 
        b.xuat();
}
void Phanso::Cong(){
    c.tu=a.tu*b.mau+a.mau*b.tu;
    c.mau=a.mau*b.mau;
    xuat();
}
void Phanso::Hieu(){
    c.tu=a.tu*b.mau-a.mau*b.tu;
    c.mau=a.mau*b.mau;
    xuat();
}
void Phanso::Tich(){
    c.tu=a.tu*b.tu;
    c.mau=a.mau*b.mau;
    xuat();
}
int main (){
    a.nhap();
    b.nhap();
    a.xuat();
    b.xuat();
    Compare(a,b);
    c.Cong();
    c.Hieu();
    c.Nhan();
    return 0;
}