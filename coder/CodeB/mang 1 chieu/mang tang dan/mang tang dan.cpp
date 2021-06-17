#include<iostream>
using namespace std;
void snt ( int n)
{
    bool snt=true;
    if (n<2)
        snt= false;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
            snt= false;
    }
    if(snt==true)
        cout<<n;
}
bool check(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]>a[i+1])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
 while(check(a,n)==false)
 {
     for (int i=0;i<n;i++)
        cin>> a[i];
 }
 if (check(a,n)==true)
 {
     for (int i=0;i<n;i++)
        snt(a[i]);
 }
    return 0;
}

