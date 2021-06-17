#include <iostream>
#include <math.h>
using namespace std;
int uocle(int l, int r)
{
    int dem =0;
    int uoc=0;
    for (int i=l;i<=r;i++)
    {
        for (int j=1;j<= sqrt(i);j++)
        {
            if(i%j==0)
               {
                   dem=dem+1;
                   if (dem%2!=0)
                    uoc=uoc +1;
               }
        }
    }
    return uoc;
}
int main ()
{
    int l,r;
    cin>>l>>r;
    int result=uocle(l,r);
    cout <<result;
    return 0;
}
