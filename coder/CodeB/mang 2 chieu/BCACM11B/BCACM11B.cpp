
#include <iostream>

using namespace std;
int a[100][100];
int x,y,n;
void tao(){
	int d=0, gt=1, hang=n-1, cot=n-1;
	while(d<=n/2){
		for(int i=d; i<=cot; i++) a[d][i]=gt++;
		for(int i=d+1; i<=hang; i++) a[i][cot]=gt++;
		for(int i=cot-1; i>=d; i--) a[hang][i]=gt++;
		for(int i=hang-1; i>d; i--) a[i][d]=gt++;
		d++;
		hang--;
		cot--;
	}
}
int main(){

		cin >> n >> x >> y;
		tao();
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if((i==x)&&(j==y)) 		cout << a[i-1][j-1] << endl;
			}
		}

}
