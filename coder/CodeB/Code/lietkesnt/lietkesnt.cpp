#include <iostream>

using namespace std ;
int n ;
int main ()
{
    cin>> n;
    int s=0;



    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            s=s+1;
        }
        if (s==2)
            cout <<" "<<i;
        s=0;
    }


        return 0;


}
