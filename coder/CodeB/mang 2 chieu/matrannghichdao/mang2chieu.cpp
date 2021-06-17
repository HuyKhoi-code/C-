#include<iostream>

using namespace std;
int M[50][50];
void NhapMaTran(int A[50][50], int n, int m){
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++){
    cin>>A[i][j];
   }
}
void InMaTran(int B[50][50], int n,int m){
  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++)
    cout<<B[i][j];
    cout<<"\n";

  }
}
void doicot(int F[50][50], int n, int m)
{
    int the;
    for (int i=0;i<m;i++)
{


        for (int j=0;j<n;j++)
            {
            the= F[i][j];
            F[i][j]=F[i][n-j-1];
            F[i][n-j-1]=the;
            }
}


}

void ChuyenVi(int F[50][50], int n,int m){

 for(int j=0;j<m;j++){
  for(int i=0;i<n;i++){

   cout << F[i][j];
   cout <<"\n";
  }
 }
}
main(){
  int r,c;
  cout<<" So dong = "; cin>>r;
  cout<<"\n So cot = "; cin>>c;
  NhapMaTran(M,r,c);
  cout<<"\n Ma tran vua nhap: \n";
  InMaTran(M,r,c);
doicot(M,r,c);
  cout<<"Ma tran chuyen vi: \n";
  ChuyenVi(M,r,c);
}
