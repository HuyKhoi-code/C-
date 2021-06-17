#include<iostream>
using namespace std;
int n,i;
int main ()
{
    cin>>n;
    int s=0;
    int c=0;
    while (n>0)
    {
        i=n%10;
        if (i%2==0)
            s=s+i;
        if (i%2!=0)
            c=c+i;
        n=n/10;
    }
    cout<< "tong chan:"<<s<<endl;
    cout << "tong le:"<<c;
    return 0;

}
