#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        if (a > b)
        {
            return ucln(b, a % b);
        }
        else
        {
            return ucln(b % a, a);
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (ucln(a, b) == 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, t = 0;
//     cin >> a >> b;
//     for (int i = 2; i <= a; ++i)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             t = 1;
//             break;
//         }
//     }
//     if (t == 1)
//     {
//         cout << "no";
//     }
//     else
//     {
//         cout << "yes";
//     }
//     return 0;
// }