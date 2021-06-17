#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    cin>> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i]!=a[n-i-1])
            a[i]=a[n-1-i];
        cout << a[i];
    }
    return 0;
}
