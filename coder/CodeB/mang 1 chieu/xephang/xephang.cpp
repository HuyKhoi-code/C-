#include<iostream>
#include<stdio.h>
using namespace std;
void xephang(char a[],int n)
{
    int dem=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]!=a[i+1])
            dem=dem+1;
    }
    cout << dem+1;
}
int main()
{
    int n;
    cout<< "so nguoi dung truoc:";
    cin>>n;
    char a[n];
    for (int i=0;i<n;i++)
        cin>> a[i];
    xephang(a,n);
    return 0;
}
