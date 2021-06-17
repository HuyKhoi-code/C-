#include <iostream>
using namespace std;
int a,b,c,d;
int main ()
{
    cin >>a>>b>>c;
    if (a>b)
        d=a;
    if (a>c)
        d=a;
    if (b>c)
        c=b;
        cout <<c<<b<<d;
    return 0;
}
