#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cout << "nhap vao so a:"<<a ;
    cin >> a;
    cout << "nhap vao so b:"<<b;
    cin >> b;
    cout << "nhap vao so c:"<<c;
    cin >> c;
    if (a<b)
    {
        a=b;
    }
    if (a<c)
    {
        a=c;
    }
 cout << "so lon nhat la:"<< a;
return 0;
}


