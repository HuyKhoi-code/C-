#include <iostream>
using namespace std;
int fi(int n)
{
    if (n==1||n==2)
        return 1;
    else
        return fi(n-1)+fi(n-2);

}
int main ()
{
    int n;
    cin >>n;
    int t;
    for (int i=1; i<=n;i++)
        t=fi(i);
    cout <<t;
    return 0;
}
