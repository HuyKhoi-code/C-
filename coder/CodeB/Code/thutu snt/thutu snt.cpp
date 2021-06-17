#include <bits/stdc++.h>
#define MAX 600001
using namespace std;
bool f[MAX];
int n;
void snt()
{
    for (int i=2;i<MAX;i++)
        f[i]=true;
    for (int i=2;i<MAX;i++)
    {
        if (f[i]==true)
        {
            for (int j=2;j<=MAX/i;j++)
                f[i*j]=false;
        }
    }
}
int main()
{
    snt();
    cin>>n;
    int dem=0;
    for (int i=2;i<MAX;i++)
    {
        if (f[i]==true)
            dem =dem +1;
        if (dem ==n)
           {

            cout<< i;
            break;
           }
    }
    return 0;
}

