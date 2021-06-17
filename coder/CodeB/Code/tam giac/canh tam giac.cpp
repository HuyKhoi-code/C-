#include <iostream>
using namespace std;
float a,b,c;
int main ()
{
   cout << "nhap so a:"  ;
   cin >> a;
   cout << "nhap so b:" ;
   cin >>b;
   cout << "nhap so c:" ;
   cin >>c;


    if (a+b>c &&  b+c>a && a+c>b)
    {
        cout << "la tam giac";
    }
    else
    {
        cout << " khong la tam giac";
    }

    return 0;
}
