#include <stdio.h>
#include <iostream>
using namespace std;
void tachmang(int n ,int a[]){
    int chan,le;
    for(int i=0;i<n;i++){
        if (a[i]%2==0)
            chan++;
        else
            le++;
    }
    int arrchan[n];
    int arrle[n];
     chan=0;
     le=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
            arrchan[chan++]=a[i];
        else 
            arrle[le++]=a[i];
    }
    cout<<"mang chan: ";
    for(int i=0;i<chan;i++)
        cout<< arrchan[i]<<" ";
    cout<< "\nmang le: ";
    for(int i=0;i<le;i++)
        cout<<arrle[i]<<" ";
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    tachmang(n,a);
    return 0;
}