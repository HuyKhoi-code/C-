#include <iostream>
#include <math.h>
using namespace std;
float a,b,c,d;
int main()
{
    cout << "nhap vao 3 so a,b,c:" ;
    cin >> a >> b >> c;
    if (a>b)
    {
        d=a;
        a=b;
        b=d;
    }
    if (a>c)
    {
        d=a;
        a=c;
        c=d;
    }
    if (b>c)
    {
        d=b;
        b=c;
        c=d;
    }
    cout << a << " " <<b<< " " <<c<< " " ;
    return 0;
}
