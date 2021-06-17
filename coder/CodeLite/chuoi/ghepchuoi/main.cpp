#include <iostream>
#include <stdio.h>
using namespace std;
void del(int a[],int n){
    int b[100]={0};
    for(int i=0;i<n;i++){
        if (b[a[i]]==0){
            cout<< a[i]<< " ";
            b[a[i]]=1;
        }
    }
}
void ghepchuoi(int a[],int b[],int n){
    int c[100];
    for (int i=0;i<n*2;i=i+2){
        c[i]=a[i/2];
        c[i+1]=b[i/2];
    }
    int x[100];
    for (int i=0;i<n*2;i++){
        x[i]=c[i];
    }
    del(x,n*2);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    ghepchuoi(a,b,n);
    return 0;
}