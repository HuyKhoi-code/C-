#include <iostream>
#include <math.h>
using namespace std;
int n;
int main ()
{
    cin>>n;
    int t;
    for (int i=1;i<=sqrt(n);i++)
    {
        t=i*i;
        cout <<" "<< t;
    }
    return 0;
}
