#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct sotietkiem{
    int maso;
    char hoten[30];
    int cmnd;
    int ngay;
    float tien;
};
void nhap1(sotietkiem &x){
    cout<<"\nnhap ma so: ";
    fflush(stdin);
    cin>>x.maso;
    cout<<"ho ten khach hang: ";
    fflush(stdin);
    gets(x.hoten) ;
    cout<<"chung minh nhan dan khach hang: ";
    fflush(stdin);
    cin>>x.cmnd;
    cout<<"ngay mo so: ";
    fflush(stdin);
    cin>>x.ngay;
    cout<<"tien tiet kiem: ";
    fflush(stdin);
    cin>>x.tien;
}
void xuat1(sotietkiem x){
    cout<<"\nma so: "<<x.maso<<endl;
    cout<<"ho ten: "<<x.hoten<<endl;
    cout<<"cmnd: "<<x.cmnd<<endl;
    cout<<"ngay mo so:"<<x.ngay<<endl;
    cout<<"so tien: "<< x.tien<<endl;
}
void nhap(sotietkiem a[],int n){
    for (int i=0;i<n;i++)
        nhap1(a[i]);
}
void xuat(sotietkiem a[],int n){
    cout<<"------------------------------------------------------------------";
    for (int i=0;i<n;i++)
        xuat1(a[i]);
}
void khachgiau(sotietkiem a[],int n){
    cout<<"------------------------------------------------------------------";
    for (int i=0;i<n;i++){
        if (a[i].tien>10000)
            xuat1(a[i]);
    }
}
int main(){
    int n;
    cin>>n;
    sotietkiem a[n];
    nhap(a,n);
    khachgiau(a,n);
}
