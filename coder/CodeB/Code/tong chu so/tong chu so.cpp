#include <iostream>
using namespace std;


int Sum(int N)
{
    int S = 0;
    while (N > 0)
    {
        int t = N % 10;

        S = S + t;

        N = N / 10;
    }
    return S;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int result = Sum(N);
    cout << "Tong = " << result << endl;

}
