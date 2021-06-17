#include <iostream>
#include <stdio.h>
using namespace std;
 typedef struct sinhvien{
    char hoten[100];
    char gioitinh[5];
    int mssv;
    int namsinh;
};
void sinhvien1(sinhvien &x){
    cout<<"\nnhap ten sinh vien: ";
    fflush(stdin);
    gets(x.hoten);
    cout<<"nhap gioi tinh sinh vien: ";
    fflush(stdin);
    gets(x.gioitinh);
    cout<<"nhap ma so sinh vien: ";
    fflush(stdin);
    cin>>x.mssv;
    cout<<"nhap nam sinh sinh vien: ";
    fflush(stdin);
    cin>> x.namsinh;
}
void xuatthongtin(sinhvien x){
    
    cout<<"\nho va ten: "<<x.hoten<< endl;
    cout<<"gioi tinh: "<<x.gioitinh<<endl;
    cout<<"ma so sinh vien: "<<x.mssv<<endl;
    cout<<"nam sinh: "<< x.namsinh<<endl;
}
void nhapdanhsach(sinhvien a[],int n){
    for (int i=0;i<n;i++){
        sinhvien1(a[i]);
    }
        
}
void xuatdanhsach(sinhvien a[],int n){
    cout<<"\nbang du lieu"<< endl;
    for (int i=0;i<n;i++){
        xuatthongtin(a[i]);
    }
}
void sapxep(sinhvien a[],int n){
    for (int i=0;i<n;i++){
        if (a[i].namsinh>1998)
            cout<< a[i].hoten;
    }
}
int main(){
    sinhvien a[100];
    int n;
    cin>>n;
    nhapdanhsach( a,n);
    sapxep(a,n);
}
