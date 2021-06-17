#include<iostream>
using namespace std;
int tong(int n)
{
    int t=0;
    int x;
    while (n>0)
    {
        x=n%10;
        n=n/10;
        if (x%2!=0)
            t=t+x;
    }
    return t;
}
int main()
{
    int n;
    cin>>n;
    int result=tong (n);
    cout << result;
    return 0;
}
