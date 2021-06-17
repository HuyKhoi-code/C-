#include <iostream>
#include <math.h>
using namespace std;
int n;
int main ()
{
    cin>>n;
    if (n<2)
        cout<< "ko phai snt";
        else
    {
        if (n%2==0)
           cout << "ko phai snt";
        else
        {
          for (int i=2;i<=sqrt(n);i++)
            {
              if (n%i==0)
                 cout << "ko phai snt";
              else
                cout << "la snt";
            }
        }
    }
    return 0;
}
