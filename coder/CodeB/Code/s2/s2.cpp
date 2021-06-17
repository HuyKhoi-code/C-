#include <iostream>
using namespace std;
int n;
float s;
int main ()
{
    cin >>n;


    for (int i=1;i<=n;i++)
    {
       if (n%2!=0)
        s=s+1/((2*1)*(2*1));
       else
        s=s-1/((2*1)*(2*1));
       cout <<s;
    }


    return 0;
}
