#include <iostream>
#include <iomanip>

using namespace std;

int main_1()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "chia het cho 3" << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "khong chia het cho 3" << endl;
        }
    }
    return 0;
}

int main_2()
{
    int n;
    cin >> n;
    for (int i = 7; i < n; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

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

int main_3()
{
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl;
    return 0;
}

int main_4()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}

int main_5()
{
    char a;
    cin >> a;
    int int_a = (int)a;
    // cout << (int)a << endl;
    // a = 97, z=122, A=65,Z=90

    // chu hoa
    if (int_a >= 65 && int_a <= 90)
    {
        // neu tu 65 => 85 thi chi can +5
        if (a <= 85)
        {
            int new_a = int_a + 5;
            cout << (char)new_a << endl;
        }
        else
        {
            int new_a = int_a - 21;
            cout << (char)new_a << endl;
        }
    }

    // chu thuong
    if (int_a >= 97 && int_a <= 122)
    {
        // neu tu 65 => 85 thi chi can +5
        if (a <= 117)
        {
            int new_a = int_a + 5;
            cout << (char)new_a << endl;
        }
        else
        {
            int new_a = int_a - 21;
            cout << (char)new_a << endl;
        }
    }

    return 0;
}

int main_6()
{
    int n = 5;
    // cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = (n - 1 - j); i > 0; i--)
        {
            cout << " ";
        }

        for (int i = 0; i < (2 * j + 1); i++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}

int main_7()
{
    // N 10  E 5  => N5E10 => ucln(5,10)=> 5 => chia 5,10 cho ucln => NE2
    int a, b;
    char a1, b1;

    cin >> a1 >> a >> b1 >> b;
    int ucln_a_b = ucln(a, b);
    a = a / ucln_a_b;
    b = b / ucln_a_b;

    cout << a1;
    if (b > 1)
    {
        cout << b;
    }
    cout << b1;
    if (a > 1)
    {
        cout << a;
    }
    cout << endl;
    return 0;
}

int tinh_giai_thua(int a)
{
    int ket_qua = 1;
    for (int i = 1; i <= a; i++)
    {
        ket_qua *= i;
    }
    return ket_qua;
}

int main_8()
{
    // int a =4;
    // cout << tinh_giai_thua(a) << endl;
    int k, n;
    cin >> k >> n;

    int c = tinh_giai_thua(n) / (tinh_giai_thua(k) * tinh_giai_thua(n - k));
    cout << c << endl;
    return 0;
}

int main_9()
{
    // 6 12 30 45;
    // 6 30 45
    // 6 45
    // 3
    int n = 4;
    int a[] = {6, 12, 30, 45};

    int ket_qua = a[0];

    for (int i = 1; i < n; i++)
    {
        ket_qua = ucln(ket_qua, a[i]);
    }
    cout << ket_qua << endl;

    return 0;
}

// 10,00 => 10
// 10,33333 => 10,33
// 10,30 =>

// a * 100 => a%10 => so cuoi=> if so_cuoi == 0 => int

int main()
{
    float a = 10.333333;
    int new_a = (int)a;
    float difference = a - new_a;

    if (difference == 0)
    {
        cout << (int)a << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << a << endl;
    }
    return 0;
}