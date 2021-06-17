#include <iostream>
#include <math.h>
using namespace std;
bool songuyento (int a)
{
    if (a<2)
    {
        return false;
    }
    else if (a>2)
    {
        if (a%2==0)
        {
            return false;
        }
        for (int i=3; i< sqrt ((int)a); i=i+2 )
        {
            if (a%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "nhap so nguyen n:" ;
    cin >> n;
    if (songuyento(n)==true)
    {
        cout << "n la so nguyen to";
    }
    else
    {
        cout << "n ko la so nguyen to ";
    }
    return 0;
}
