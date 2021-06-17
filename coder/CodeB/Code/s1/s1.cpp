#include <iostream>
using namespace std ;
int n;
int main ()
{
    cin>>n;
    int s=0;
    for (int i=1;i<=n;i++)
        s=s+(2*i-1)*(2*i-1);
    cout<< s;
    return 0;

}
