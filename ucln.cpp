#include <iostream>
using namespace std;

int UCLN(int a, int b)
{
    if (a < b)
    {
        if (a == 0)
        {
            return b;
        }
        else
        {
            return UCLN(b % a, a);
        }
    }
    else
    {
        if (b == 0)
        {
            return a;
        }
        else
        {
            return UCLN(a % b, b);
        }
    }
}

int main()
{
    // cout << UCLN(9, 12) << endl;
    // cout << UCLN(12, 9) << endl;
    // cout << UCLN(12, 12) << endl;

    // int socon, sochan, ga, cho;
    // cin >> socon >> sochan;

    // bool thoa_man = false;

    // for (ga = 0; ga <= socon; ga++)
    // {
    //     cho = socon - ga;

    //     int chan_cho = 4 * cho;

    //     if (chan_cho + ga * 2 == sochan)
    //     {
    //         cout << cho << " " << ga << endl;
    //         thoa_man = true;
    //         break;
    //     }
    // }

    // if (thoa_man == false)
    // {
    //     cout << "invalid" << endl;
    // }

    int a = 12, b = 12;

    while (true)
    {
        if (a == 0)
        {
            cout << b << endl;
            break;
        }
        if (b == 0)
        {
            cout << a << endl;
            break;
        }

        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    return 0;
}