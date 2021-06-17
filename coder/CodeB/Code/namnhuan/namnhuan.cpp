#include <iostream>
using namespace std;
int n;
int main ()
{
    cout<< "nhap nam:";
    cin >> n;
    if (n%4==0)
        cout << "nam nhuan";
    else
        cout << "nam deo nhuan";
    return 0;
}
