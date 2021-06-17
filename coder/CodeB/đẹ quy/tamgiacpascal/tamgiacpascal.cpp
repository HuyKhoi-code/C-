#include <pch.h>
#include <iostream>
using namespace std;
int tamgiac(int k, int n)
{
    if (k==0||k==n)
        return 1;
    if (k==1)
        return n;
    return tamgiac(k-1,n-1)+tamgiac(k,n-1);
}
int main()
{
    int n;
    cin>> n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
            cout <<tamgiac(j,i)<< " ";
        cout << endl;
    }
    return 0;
}
