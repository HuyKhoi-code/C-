s #include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    char a[256];
    gets(a);
    for (int i=strlen(a);i>=0;i--){
        cout<< a[i];
    }
    cout<< endl;
    return 0;
}
