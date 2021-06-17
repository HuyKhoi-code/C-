#include <iostream>
#include <math.h>
using namespace std;
int x;
float a,b,y;
int main ()
{
    const int pi = 3.14;
    cout << "nhap x:";
    cin >>x;
    a= sin(pi*x*x)+sqrt(x*x+1);
    b= exp(x*2)+cos((pi/4)*x);
    y=a/b;
    cout <<y;
    return 0;
}

