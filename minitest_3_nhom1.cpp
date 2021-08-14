#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

struct hcn
{
    int x_max, x_min, y_max, y_min;
    hcn()
    {
        x_max = 0;
        x_min = 0;
        y_max = 0;
        y_min = 0;
    }

    int dien_tich()
    {
        return (x_max - x_min) * (y_max - y_min);
    }
};

int trung_nhau(int a, int b, int c, int d)
{
    int min = a;
    if (c < min)
    {
        min = c;
    }

    int max = d;
    if (b > max)
    {
        max = b;
    }

    int C = max - min;
    int A = b - a;
    int B = d - c;

    if (C >= (A + B))
    {
        return 0;
    }
    else
    {
        return A + B - C;
    }
}

int main_1()
{
    hcn so1, so2;

    cin >> so1.x_max >> so1.x_min >> so1.y_max >> so1.y_min;
    cin >> so2.x_max >> so2.x_min >> so2.y_max >> so2.y_min;

    int dien_tich_1 = so1.dien_tich();
    int dien_tich_2 = so2.dien_tich();

    int trung_nhau_x = trung_nhau(so1.x_min, so1.x_max, so2.x_min, so2.x_max);
    int trung_nhau_y = trung_nhau(so1.y_min, so1.y_max, so2.y_min, so2.y_max);
    int dien_tich_trung = trung_nhau_x * trung_nhau_y;

    cout << (dien_tich_1 + dien_tich_2 - dien_tich_trung) << endl;

    return 0;
}

int main_2()
{

    // string a = "abcdeee", b = "eeedcab";
    string a, b;
    cin >> a >> b;

    // buoc 1: dao nguoc A
    string a_dao_nguoc = "";

    for (int i = (a.length() - 1); i >= 0; i--)
    {
        a_dao_nguoc = a_dao_nguoc + a[i];
    }

    // buoc 2: dem xem bao nhieu cai trung
    int so_luong_trung_nhau = 0;
    while (true)
    {
        if (a_dao_nguoc[so_luong_trung_nhau] == b[so_luong_trung_nhau])
        {
            so_luong_trung_nhau++;
        }
        else
        {
            break;
        }
    }
    // cout << so_luong_trung_nhau << endl;

    // buoc 3: hien thi nhung cai k trung
    for (int i = 0; i < (a.length() - so_luong_trung_nhau); i++)
    {
        cout << a[i];
    }

    for (int i = 0; i < b.length(); i++)
    {
        if (i > so_luong_trung_nhau - 1)
        {
            cout << b[i];
        }
    }
    cout << endl;

    return 0;
}

struct vector_xy
{
    int x, y;
    vector_xy()
    {
        x = 0;
        y = 0;
    }

    void print_do_dai()
    {
        cout << fixed << setprecision(2) << sqrt(x * x + y * y) << endl;
    }
};

void tich_vo_huong(vector_xy a, vector_xy b)
{
    int ket_qua = (a.x * b.x + a.y * b.y);
    cout << ket_qua << endl;
}

int main()
{
    vector_xy a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    a.print_do_dai();
    b.print_do_dai();

    tich_vo_huong(a, b);
    return 0;
}