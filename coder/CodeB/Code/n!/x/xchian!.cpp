#include <iostream>
using namespace std ;
int x,n;
int main ()
{
    cin >>x;
    cin >>n;
    float s=0;
    int t=1;
    int d=1;
    for (int i=1;i<=n;i++)
        {

            t=t*i;

            d=d*x;
            s=s+d/t;
        }
        cout <<s;
        return 0;

}
