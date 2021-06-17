#include <iostream>
using namespace std;
long int giaithua(int n)
{
    if(n==1)
        return 1;
    else
        return n*giaithua(n-1);
}
long int luythua(int x, int n)
{
    if (n==1)
        return x;
    else
        return x*luythua(x,n-1);
}
long int tong(int x, int n)
{
    if (n==1)
        return x;
    else
        return luythua(x,n)/giaithua(n)+tong(x,n-1);
}
int main()
{
    int x;
    int n;
    cin>>x;
    cin>>n;
    int result=tong(x,n);
    cout<< result;
    return 0;
}

