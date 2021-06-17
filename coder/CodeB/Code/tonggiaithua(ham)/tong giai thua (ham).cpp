#include <iostream>
using namespace std;
int tong (int n)
{
    int t=0;
    int d=1;
    for (int i=1;i<=n;i++)
    {
        d=d*i;
        t=t+d;
    }
    return t;
}
int main ()
{
    int n;
    cin >>n;
    int result=tong(n);
    cout << result;
    return 0;
}
