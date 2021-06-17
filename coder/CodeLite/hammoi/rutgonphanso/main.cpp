#include <iostream>
using namespace std;
int ucln(int a,int b){
    int d;
    for (int i=1;i<= a;i++)
    {
       for (int i=1;i<=b;i++)
      {
        if (a%i==0)
          {
              if (b%i==0)
               d=i;
          }
      }
    }
    return d;
}
int main(){
    int a,b;
    cout<<"nhap tu so:"<<endl;
    cin>>a;
    cout<<"nhap mau so:";
    cin>>b;
    cout<<endl;
    int t=ucln(a,b);
    cout<<a/t<<"/"<<b/t;
    return 0;
}