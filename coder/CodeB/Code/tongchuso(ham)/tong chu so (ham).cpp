#include <iostream>
using namespace std;
int tong (int n)
{
    int t=0;
    int i;
    while (n>0)
    {
        i=n%10;
        n=n/10;
        t=t+i;
    }
    return t;

}
int main ()
{
    int n;
    cin >>n;
    int result=tong (n);
    cout << result;
    return 0;
}
