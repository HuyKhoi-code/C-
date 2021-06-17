
#include <iostream>

using namespace std;
int main()
{
    float  a,b,x;
    cout << "nhap so a:" ;
    cin >> a ;
    cout << "nhap so b:" ;
    cin >> b;
    cout << a << " "<<"*x+"<<b<< " "<< "=0" << endl;
    x=(-b/a);
    if (a==0)
    {
        if (b==0)
        {
            cout << "phuong trinh co vo so nghiem"<< endl;
        }
            else
            {
                cout << "phuong trinh vo nghiem" << endl;
            }
    }
    else
        {
            cout << "phuong trinh co nghiem :"<< x<< endl;
        }

return 0;
}
