#include <iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
void nhap(int a[4][4])
{
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
            cin>> a[i][j];
    }
}
void tongduongcheo (int a[4][4])
{
    int tong=0;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if (i==j)
                tong =tong +a[i][j];
        }
    }
    cout<< tong ;
}
int main()
{
    int a[4][4];
    nhap(a);
    tongduongcheo(a);
    return 0;
}


