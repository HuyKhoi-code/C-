#include <iostream>

using namespace std;

int main(int argc, char** argv){

	int n;
	cin>>n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			int D;
			if (i <= (n-1)/2)
                D = 2*i+1;
			else D = 2*n-(2*i+1);
			if ((j < (n-D)/2) || (j >= (n+D)/2))
				cout<<"*";
			else cout<<"D";
		}
		cout<<"\n";
	}

	return 0;
}
