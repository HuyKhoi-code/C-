#include <iostream>

using namespace std;

int main()
{
    int n,a[100],b[100]={0};
    cin>>n;
    for(int i=0;i<n;++i)
    cin>>a[i];
    for(int i=0;i<n;++i)
        if(b[a[i]]==0)
            {
                cout<<a[i]<<" ";
                b[a[i]]=1;
            }


    return 0;
}
