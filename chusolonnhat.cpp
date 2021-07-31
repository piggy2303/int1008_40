#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // int n, count_uoc = 0;
    // cin >> n;

    // for (int i = 1; i <= n/2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count_uoc++;
    //     }
    // }

    // if (count_uoc == 2)
    // {
    //     cout << "yes" << endl;
    // }
    // else
    // {
    //     cout << "no" << endl;
    // }

    int n;
    cin >> n;

    // cach 1
    int k = sqrt(n);
    if (k * k == n)
    {
        cout << "yes" << endl;
    }

    // cach2
    for (int i = 1; i < (n / 2); i++)
    {
        if (i * i == n)
        {
            cout << "yes" << endl;
            break;
        }
    }

    return 0;
}