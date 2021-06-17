#include <iostream>
using namespace std;
int n;
int main ()
{
    cin >>n;
    int s=1;
    for (int i=1;i<=n;i++)
    {

        if (n%2==0)

            s=s*(2*i);
        if (n%2!=0)
            s=s*(2*i-1);



    }
    cout <<s;

    return 0;
}
