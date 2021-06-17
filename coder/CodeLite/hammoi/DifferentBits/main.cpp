#include<iostream>
using namespace std;
void Change(int n,int m){
    int dem=0;
    int i=0, a[100]={0};
    int j=0, b[100]={0};
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    while (m>0){
        b[j]=m%2;
        m=m/2;
        j++;
    }
    int t;
    if (j>i)
        t=j;
    else 
        t=i;
    for(int k=t-1;k>=0;k--){
        if(a[k]!=b[t-1])
            dem++;
        t--;
    }
    cout<<dem<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    Change(n,m);
    return 0;
}