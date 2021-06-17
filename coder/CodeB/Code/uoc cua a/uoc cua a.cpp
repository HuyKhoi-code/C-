#include<iostream>
using namespace std;
int a,b;
int main ()
{

    cin>>a>>b;
    for (int i=1;i<=a;i++)
    {
        if (a%i==0)
         {
             if (b%i!=0)
                cout<<" "<<i;
         }
    }

    return 0;
}
