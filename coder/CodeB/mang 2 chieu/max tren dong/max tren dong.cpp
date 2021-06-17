#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void nhap(int a[100][100],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            cin>> a[i][j];
    }
}
void maxdong(int a[100][100],int m, int n)
{
    int maxx=a[0][0];
    for (int i=0;i<m;i++)
    {
        maxx=a[i][0];
        for (int j=0;j<n;j++)
        {
            if (a[i][j]>maxx)
                maxx=a[i][j];
        }
        cout<<"so lon nhat dong thu "<<i<<" la: "<< maxx<<endl;
    }
}
int main()
{
    int m;
    int n;
    int a[100][100];
    cin>>m>>n;
    nhap(a,m,n);
    maxdong(a,m,n);
    return 0;
}

