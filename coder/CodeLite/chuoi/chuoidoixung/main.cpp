#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
bool check(char s[100]){
    for (int i=0;i<strlen(s);i++){
        if (s[i]==s[strlen(s)-1-i])
            return true;
    }
    return false;
}
int main(){
    char s[100];
    gets(s);
    if (check(s)==true)
        cout<< "yes";
    if (check(s)==false)
        cout << "NO";
    return 0;
}