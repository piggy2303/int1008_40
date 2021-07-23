#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b + c) && (a > abs(b - c)))
    {
        if (a == b && b == c)
        {
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