#include<iostream>
using namespace std;
bool daydx(int a[ ],int n)
{
    for (int i=0; i<=n/2;i++)
    {
        if (a[i]==a[n-1-i])
            return true;
    }
    return false;
}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    int result;
    for (int i=0;i<=n/2;i++)
    {
        cin>> a[i];
        result=daydx(a,n);
    }
    if (result == true)
        cout << "yes ";
    else
        cout<< "no ";
        return 0;
}
