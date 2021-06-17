#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    char a[256];
    int dem=0;
    gets(a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=a[i+1])
            dem=dem+1;
    }
    cout<< dem+1<< endl;
    return 0;
}