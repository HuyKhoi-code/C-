#include <iostream>
using namespace std ;
int sum (int n)
{
    int s= 0;
    while (n>0)
    {
        int t= n%10;
        s=s+t;
        n=n/10;
    }
    return s;
}
int main ()
{
    int n;
    cout << "nhap so :";
    cin >> n;
    int result = sum (n);

        result = result%10;
        cout << "so nut la:" << result;

    return 0;
}
