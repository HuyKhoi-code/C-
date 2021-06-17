#include<iostream>
using namespace std ;
int tong(int n)
{
    float t;
    for (int i=1;i<=n;i++)

        t=t+1/(2*i);
    return t;

}
int main ()
{
    int n;
    cin >>n;
    float result=tong(n);
    cout<< result;
    return 0;
}
