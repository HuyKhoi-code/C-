#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char a[100];
    gets(a);
    int dem =0;
    for(int i=0;i<strlen(a);i++){
        if (a[i]==' ')
            dem=dem+1;
    }
    cout<<"so tu may da nhap vao:"<<dem+1<< endl;
    return 0;
}
