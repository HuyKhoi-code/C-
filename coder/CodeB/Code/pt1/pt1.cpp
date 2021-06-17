#include <iostream>
using namespace std;
int a,b;
int main ()
{
    cin>>a>>b;
    if (a==0)
    {
        if (b==0)
            cout << "pt co vo so nghiem";
        else
            cout << "pt vo nghiem";
    }
    else
        cout << "x="<<(-b/a);
    return 0;

}

