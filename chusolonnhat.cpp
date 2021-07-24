#include <iostream>
using namespace std;

int main()
{
    // int max = 0;
    // string n;
    // cin >> n;

    // for (int i = 0; i < n.length(); i++)
    // {
    //     int nn = (int)(n[i]) - 48;
    //     if (nn > max)
    //     {
    //         max = nn;
    //     }
    // }
    // cout << max << endl;
    // char a;
    // cin >> a;
    // cout << (int)a;

    // int n;
    // cin >> n;
    // bool chinh_phuong = false;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i * i == n)
    //     {
    //         cout << "chinh_phuong" << endl;
    //         chinh_phuong = true;
    //         break;
    //     }
    // }
    // if (chinh_phuong == false)
    // {
    //     cout << "khong_phai" << endl;
    // }

    // int n, count_uoc = 0;
    // cin >> n;

    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     if (n % i == 0)
    //     {
    //         count_uoc++;
    //     }
    // }
    // cout << count_uoc << endl;

    while (true)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            cout << "bye" << endl;
            break;
        }
        else
        {
            if (n < 0 || n % 5 != 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << (n / 5) << endl;
            }
        }
    }

    return 0;
}