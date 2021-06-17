#include <iostream>
using namespace std;
int ucln (int a, int b)
{
    int r;
    while (a%b!=0)
    {
        if (a>b)
         r=a%b;
        else
         r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int main ()
{
    int a,b;
    cin >>a;
    cin >>b;
    int result =ucln(a,b);
    cout<< result;
    return 0;
}


