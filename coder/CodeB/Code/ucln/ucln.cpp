#include <iostream>

using namespace std;
int a,b,d;
int main ()
{
    cin>>a>>b;
    for (int i=1;i<= a;i++)
    {
       for (int i=1;i<=b;i++)
      {
        if (a%i==0)
          {
              if (b%i==0)
               d=i;
          }
      }
    }
    cout<<d;

       return 0;
}
