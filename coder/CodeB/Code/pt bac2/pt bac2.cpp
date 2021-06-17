#include <iostream>
#include <math.h>
using namespace std;
int a,b,c;
float d;

int main ()
{
    cout << "nhap a,b,c:";
    cin>> a >> b >> c;
    if(a==0)
    {
        if (b==0)
        {
            if (c==0)
                cout << "pt co vo so nghiem";
            else
                cout << "pt vo nghiem";
        }
        else
            cout << "pt co 1 nghiem:"<< -c/b;
    }
    else
    {

        d=(b*b)-4*a*c;
        if (d<0)
            cout << "pt vo nghiem";
        if (d==0)
        {

            cout << "pt co nghiem kep x="<<-b/2*a;;
        }

        if (d>0)
        {

            cout << "x1="<< ((-b+sqrt(d))/(2*a))<< endl;
            cout << "x2="<< ((-b-sqrt(d))/(2*a));
        }

    }

    return 0;
}
