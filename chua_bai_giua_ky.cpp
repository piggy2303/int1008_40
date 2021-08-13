#include <iostream>

using namespace std;

int main_1()
{
    int n = 4;
    // cin >> n;

    int k = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < (n * 2 - 2 * i - 1); j++)
        {
            cout << "=";
        }

        cout << endl;
    }
    return 0;
}

bool is_31_ngay(int m)
{
    int arr[] = {1, 3, 5, 7, 8, 10, 12};

    for (int i = 0; i < 7; i++)
    {
        if (m == arr[i])
        {
            return true;
        }
    }
    return false;
}

bool is_30_ngay(int m)
{

    int arr[] = {4, 6, 9, 11};

    for (int i = 0; i < 4; i++)
    {
        if (m == arr[i])
        {
            return true;
        }
    }
    return false;
}

bool check_nam_nhuan(int y)
{
    if (y % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main_2()
{

    // het nam => 1 1 nam
    // het thang => 1 thang moi nam
    // =>tang ngay
    int d, m, y;
    cin >> d >> m >> y;

    // het nam
    if (d == 31 && m == 12)
    {
        d = 1;
        m = 1;
        y++;
    }

    // het thang
    // 1 3 5 7 8 10 12=>31
    // 4 6 9 11 => 30
    // 2 => check nam nhuan => 28 29
    else if ((d == 31 && is_31_ngay(m)) ||
             (d == 30 && is_30_ngay(m)) ||
             (d == 28 && m == 2 && !check_nam_nhuan(y)) ||
             (d == 29 && m == 2 && check_nam_nhuan(y)))
    {
        d = 1;
        m++;
    }

    // tang ngay thong thuong
    else
    {
        d++;
    }

    cout << d << " " << m << " " << y << endl;

    return 0;
}

int tong_uoc(int n)
{
    int tong = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong;
}

void bubble_sort_tang_dan(int a[], int n)
{
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (a[i + 1] < a[i])
            {
                int c = a[i + 1];
                a[i + 1] = a[i];
                a[i] = c;
            }
        }
    }
}

int main_3()
{
    int n;
    cin >> n;

    int arr[n];
    int b_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        b_arr[i] = tong_uoc(arr[i]);
    }

    bubble_sort_tang_dan(b_arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << b_arr[i] << " ";
    }

    cout << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], t[n];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        t[i] = 0;
        for (int j = 1; j <= a[i]; ++j)
        {
            if (a[i] % j == 0)
            {
                t[i] = t[i] + j;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << t[i] << " ";
    }
}