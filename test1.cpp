#include <iostream>

using namespace std;

int main()
{
    // int a = 1;
    // a += 3;
    // cout << a << endl;

    int a, b, c;
    cin >> a >> b >> c;

    if (a > (abs(b - c)) && a < (b + c))
    {
        if (a == b && b == c)
        {
            /* code */
            cout << "deu" << endl;
        }
        else if (a == b || b == c || c == a)
        {
            cout << "can" << endl;
        }
        else
        {
            cout << "thuong" << endl;
        }
    }
    else
    {
        cout << "khong_phai" << endl;
    }

    return 0;
}