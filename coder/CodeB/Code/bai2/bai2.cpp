#include<iostream>
using namespace std;
int main(){
int a,b,c ;
{
cout << "nhap so a:" ;
cin >>a;
cout << "nhap so b:";
cin >>b;
cout << "nhap so c:";
cin>> c;
if (a<b) {
        a=b;}
if (a<c) {
        a=c;}

cout << "so lon nhat la:" <<a;
}
return 0;
}

