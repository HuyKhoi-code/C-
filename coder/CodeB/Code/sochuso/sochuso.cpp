#include <iostream>
using namespace std;
int n;
int main ()
{
    cin >>n;
    int x=0;
    while (n>0)
    {
        n=n/10;
        x=x+1;
    }
    cout <<x;
    return 0;
}
