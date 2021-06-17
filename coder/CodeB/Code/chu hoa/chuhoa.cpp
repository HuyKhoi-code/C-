#include<iostream>
using namespace std;
int main ()
{
    char a;
    {
        cout << "nhap chu:";
        cin >> a;
        if (a>= 'a'&& a<= 'z')
        {
            a=a-32;
            cout << a << endl;
        }
    }
    return 0;
}
