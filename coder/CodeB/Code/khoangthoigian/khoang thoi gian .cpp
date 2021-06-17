#include <iostream>
using namespace std ;
int a,b,c,d,e,f,hieu,h,p,s;
int main()
{

    cout << "nhap khoang thoi gian dau tien:";
    cin >>a>>b>>c;
    cout << "nhap khoang thoi gian thu 2 :";
    cin >>d>>e>>f;
    hieu = a*3600 + b*60 + c - d*3600 - e *60 - f;
    if (hieu>0)
    {
        h=hieu/3600;
        hieu = hieu -h*3600;
        p=hieu/60;
        s=hieu -p*60;
        cout << " chenh lech giua 2 thoi diem la:"<<h<< "gio"<<p<< "phut"<<s<< "giay";
    }
    return 0;
}
