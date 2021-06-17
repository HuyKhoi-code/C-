#include <iostream>
using namespace std;
int so(int n)
{
    int x=0;
    while (n>0)
    {
        n=n/10;
        x=x+1;
    }
    return x;
}
int main ()
{
    int n;
    cin>>n;
    int result=so(n);
    cout << result;
    return 0;
}
