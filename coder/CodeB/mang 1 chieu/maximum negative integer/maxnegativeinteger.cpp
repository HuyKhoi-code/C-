#include<iostream>
using namespace std;
int check(int a[],int n)
{
   int t= a[0];
   for (int i=1;i<n;i++)
   {
       if (t>a[i])
        t= a[i];
   }
   return t;
}
int main()
{
    int n;
    cin>> n;
    int a[n];
    int t;
    for (int i=0;i<n;i++)
    {
        cin>> a[i];
        t=check(a,n);
    }
    cout << t;
    return 0;
}
