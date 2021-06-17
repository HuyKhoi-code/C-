#include <iostream>
using namespace std;
int main()
{ int *a = new int[5];
for(int i=0; i<5; i++) a[i] = i+1;
int *p=a ;
cout<<"Gia tri *(p+2):"<< *(p+2);
p+=2;
cout<<"Gia tri *p:"<< *p<<endl;
cout<<*a;
return 0;
}
