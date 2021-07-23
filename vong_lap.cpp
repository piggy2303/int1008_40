#include <iostream>

using namespace std;

int main()
{
    // int dem_so = 0;

    // while (true)
    // {
    //     dem_so++;
    //     if (dem_so < 3)
    //     {
    //         continue;
    //     }
    //     cout << "dem_so nho hon 5: " << dem_so << endl;
    //     if (dem_so > 5)
    //     {
    //         break;
    //     }
    // }

    // int dem_so = 0;

    // do
    // {
    //     cout << "hello" << dem_so << endl;
    //     dem_so++;
    // } while (dem_so < 5);

    // for (khoi tao; dieu kien; cap nhat)
    // {
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "a" << endl;
    // }

    // int tong = 0;
    // int n = 10;

    // for (int i = 0; i <= n; i++)
    // {
    //     tong += i;
    //     cout << i << " " << tong << endl;
    // }
    // cout << tong << endl;

    // int n = 3;

    // ***
    // ***
    // ***

    // for (int i = 0; i < n; i++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // cout << "===========" << endl;

    // ***
    // * *
    // ***

    // int n = 3;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         if (j == 0 || j == n || i == 0 || i == n)
    //         {
    //             cout << "x";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // *
    // **
    // ***
    // ****
    // int n = 3;

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // *
    // **
    // * *
    // *  *
    // *****

    // int n = 4;

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (i == j || i == n || j == 0)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //     *
    //    ***
    //   *****
    //  *******

    int n = 4;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        for (int k = 0; k < (2 * (i) + 1); k++)
        {
            cout << "0";
        }

        cout << endl;
    }

    return 0;
}