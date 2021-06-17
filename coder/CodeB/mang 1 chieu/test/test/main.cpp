#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void daochuoi(char c[100])
{
    for (int i=0;i<strlen(c)/2;i++)
    {
        char t=c[i];
        c[i]=c[strlen(c)-1-i];
        c[strlen(c)-1-i]=t;
        
    }
    puts(c);
}
int main ()
{
    char c[100];
    cout<< "nhap chuoi: ";
    gets(c);
    daochuoi(c);
    return 0;
}
