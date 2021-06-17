#include <iostream>
using namespace std ;
int n;
int main ()
{
    int s=0;
    int t=1;
    for (int i=0;i<=n;i++)
    {
        s=s+t;
        t=t/i;
        cout << s;
    }
    return 0;
}
