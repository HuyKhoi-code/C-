#include <iostream>

using namespace std;

int sodaonguoc(int n){
	int ketqua = 0;
	while (n >= 1){
		ketqua += n % 10;
		n /= 10;
		ketqua *= 10;
	}
	return ketqua / 10;
}

int main(int argc, char** argv)
{

	int n; cin>>n;
	int x[n];
	for (int i = 0; i < n; i++)
        cin>>x[i];
	for (int i = 0; i < n; i++)
	{
		if (x[i] == sodaonguoc(x[i])) cout<<"Y";
		else cout<<"N";
	}
	cout<<"\n";

	return 0;
}
