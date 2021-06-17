#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int n,x,y;
void mecung(int a[50][50])
{
    int n;
    int d=0;
    int gt=1;
    int hang= n-1;
    int cot= n-1;
    while (d<=n/2)
    {
        for (int i=d;i<cot;i++0)
            a[d][i]=gt++;
        for (int i=d+1;i<hang;i++)
            a[i][cot]=gt++;
        for (int i=cot-1;i>=d;i--)
            a[hang][i]=gt++;
        for (int i=hang-1;i>d;i--)
            a[i][d]=gt++;
        d++;
        hang--;
        cot--;
    }
}
int main()
{
	int sl;
	cin>>sl;
	for(int k=0; k<sl; k++){
		cin >> n >> x >> y;
		mecung(a);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if((i==x)&&(j==y))
                    cout << a[i-1][j-1] << endl;
			}
		}
	}
}
