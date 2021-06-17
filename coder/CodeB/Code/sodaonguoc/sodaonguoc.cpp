#include <iostream>
using namespace std;
int sodaonguoc(int n)
{
    int so=0;
    while (n>0)
    {
        so=so*10+n%10;
        n=n/10;

    }
    return so;
}
int main ()
{
    int n;
    cin>>n;
    int result = sodaonguoc(n);
    cout << result ;
    return 0;
}
