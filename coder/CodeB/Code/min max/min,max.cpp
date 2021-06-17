#include <iostream>
using namespace std ;
int a,b,c,d ,e ;
int main ()
{
    cout << "nhap ba so a,b,c:" ;
    cin >> a >> b >> c;
    d = a;
    e = a;
    if (e>b)
    {
        e = b ;
    }
    if (e>c)
    {
        e = c;
    }
    if (d<b)
    {
        d = b;
    }
    if (d<c)
    {
        d =c ;
    }
    cout << "so lon nhat la :"<< d << endl ;
    cout << "so be nhat la :"<< e << endl;
    return 0;
}
