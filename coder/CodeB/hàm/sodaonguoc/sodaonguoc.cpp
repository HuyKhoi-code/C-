#include <iostream>
using namespace std;
int so(int n)
{
    int x;
    int t=0;
    while (n>0)
    {
        x=n%10;
        t=t*10+x;
        n=n/10;
    }
    return t;
}
int main()
{
    int n;
    cin>>n;
    int result=so(n);
    cout <<result;
    return 0;
}
