#include<iostream>
using namespace std;
bool KTsnt(int n){
    if (n<2)
        return false;
    for (int i=2;i<n;i++){
        if (n%i==0)
            return false;
    }
    return true;
}
void phantich(int n){
    for (int i=2;i<=n;i++){
        if (KTsnt(i)==true){
            while (n>0 && n%i==0){
                n=n/i;
                cout<<i;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    phantich(n);
    return 0;
}
