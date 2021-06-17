#include <iostream>
using namespace std;
int main()
{
int n, s = 0;
cout<< "nhap so nguyen n :";
cin>>n;
for(int i=0; i<=n; i=i+1)
    {
       s =s+ i;
    }

cout<< "tong cua day so tu 1 den n bang :" << s;
return 0;
}
