#include<iostream>
using namespace std;
void nhap(int a[], int &n)
{
    cout<< "nhap so phan tu trong mang:";
    cin>>n;
    for (int i=0;i<n;i++)
      cin >> a[i];
}
void check(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        int d=0;
        for (int j=0;j<n;j++)
        {
            if (a[i]==a[j]&& i!=j)
               d=+1;
        }
        if (d==0)
          cout << a[i];
    }
}
int main ()
{
    int n;
    int a[n];
    nhap(a,n);
    check(a,n);
    return 0;
}
