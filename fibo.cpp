#include <iostream>
using namespace std;

int fibo_dequy(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo_dequy(n - 1) + fibo_dequy(n - 2);
    }
}

int main()
{
    // for (int i = 1; i < 10; i++)
    // {
    //     cout << fibo_dequy(i) << " ";
    // }
    // cout << endl;
    // int a = 1, b = 1;
    // int n = 7;
    // int c;

    // cout << a << " " << b << " ";

    // while (n - 2 > 0)
    // {
    //     c = a + b;
    //     a = b;
    //     b = c;
    //     cout << c << " ";
    //     n--;
    // }

    int i = 0;
    while (i < 5)
    {
        int k = 0;
        k = i++;
        cout << k << endl;
    }

    return 0;
}