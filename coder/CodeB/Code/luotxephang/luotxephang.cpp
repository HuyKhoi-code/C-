#include <iostream>
using namespace std ;
int n;
int main ()
{
   cin >>n;
    char x[n];
    int dem =1;
    for (int i=1;i<=n;i++)
       {
        cin >> x[i];
       if (x[i]!=x[i-1])
           dem =dem +1;
       }
       cout<< (dem);
       return 0;
}
