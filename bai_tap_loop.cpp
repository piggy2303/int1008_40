
#include <iostream>
#include <iomanip>
using namespace std;

int tinh_giai_thua(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    // cout << tinh_giai_thua(3) << endl;
    int n;
    int tong = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // float j = (float)i;
        tong += tinh_giai_thua(i);
    }
    cout << tong << endl;
    return 0;
}