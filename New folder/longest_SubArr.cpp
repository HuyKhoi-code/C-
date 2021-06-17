# include <iostream>
using namespace std;

int Longest_Sub (arr, n, k){
    int arr_2 [100];
    int count = 0;
    for (int i = 0; i<n; i++){
        if (arr[i]%k != 0)
            arr_2[count] = arr[i];
            count++;
    }
    int dem = count;
    int temp = 0;
    int tong = 0;
    while (temp != dem){
        tong = tong + arr_2[temp];
        if (tong%k == 0):
            count ++;
        temp++;
    }
    return count; 
}
