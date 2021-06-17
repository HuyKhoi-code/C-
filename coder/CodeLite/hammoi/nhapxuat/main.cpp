#include <iostream>
using namespace std;
void nhap(int n,int a[]){
    for (int i=0;i<n;i++)
        cin>>a[i];
}
void xuat(int n,int a[]){
    for (int i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
int main(){
    int n;
    cin>>n;
    int a[100];
    nhap(n,a);
    xuat(n,a);
    return 0;
}
