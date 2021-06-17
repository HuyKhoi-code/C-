#include<iostream>
using namespace std ;
void nhap(int a[],int n)
{
    if (n<=1)
    {
        cout << "khong hop le";
    }
    for (int i=0;i<n;i++)
        cin>> a[i];
}
void pass(int a[],int n)
{
int t;
    for (int i=0;i<n;i++)
    {
        t=0;
        for (int j=0;j<n;j++)
        {
            if (a[i]==a[j]&&i!=j)
                {
                   t=t+1;
                }
        }

    }
            if(t!=0)
            cout<< "khong hop le";
            else
                cout << "hop le";
}
int main ()
{
    int n;
    cin>>n;
    int a[11];
    nhap(a,n);
    pass(a,n);
    return 0;
}

