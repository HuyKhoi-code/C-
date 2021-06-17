#include <iostream>
using namespace std;


bool check(int N)
{
    int tMin = N % 10;
    N = N / 10;

    while (N > 0)
    {
        int t = N % 10;

        if (t <= tMin)
            return false;
        else
            tMin = t;

        N = N / 10;
    }
    return true;
}

int main()
{
    int N;

    cin >> N;

    bool result = check(N);
    if (result)
        cout << "YES";
    else
        cout << "NO" << endl;
    return 0;

}
