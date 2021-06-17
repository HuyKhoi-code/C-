#include <iostream>
using namespace std;
void mangle(int n,int a[])
{
    int chan, le;
    for(int i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
            chan=chan++;
        }
        else
            le=le++;
    }
    int sole[le], sochan[chan];

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            sochan[chan++]=a[i];
        else
            sole[le++]=a[i];
    }
    for (int i=0;i<le;i++)
        a[i]=sole[i];
    for (int i=le;i<le+chan;i++)
        a[i]=sochan[i-le];
    for (int i=0;i<n;i++)
        cout<< a[i]<< " ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>> a[i];
    mangle(n,a);

    return 0;
}
