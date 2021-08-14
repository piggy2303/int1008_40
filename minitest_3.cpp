#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

struct hcn
{
    int min_x, min_y, max_x, max_y;
    hcn()
    {
        min_y = 0;
        min_x = 0;
        max_x = 0;
        max_y = 0;
    }

    int dien_tich()
    {
        return (max_x - min_x) * (max_y - min_y);
    }
};

int phan_trung_nhau(int a, int b, int c, int d)
{
    int min_x = a;
    if (c < a)
    {
        min_x = c;
    }

    int max_x = d;
    if (b > d)
    {
        max_x = b;
    }

    int C = max_x - min_x;
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
    cin >> so1.max_x >> so1.min_x >> so1.max_y >> so1.min_y;
    cin >> so2.max_x >> so2.min_x >> so2.max_y >> so2.min_y;

    int dien_tich_1 = so1.dien_tich();
    int dien_tich_2 = so2.dien_tich();

    int trung_nhau_x = phan_trung_nhau(so1.min_x, so1.max_x, so2.min_x, so2.max_x);
    int trung_nhau_y = phan_trung_nhau(so1.min_y, so1.max_y, so2.min_y, so2.max_y);
    int dien_tich_trung = trung_nhau_y * trung_nhau_x;

    cout << "phan trung"
         << trung_nhau_x << " "
         << trung_nhau_y << " "
         << dien_tich_trung << endl;

    cout << dien_tich_1 + dien_tich_2 - dien_tich_trung << endl;

    return 0;
}

string reverse_string(string a)
{
    string a_reverse = "";

    int index = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        a_reverse = a_reverse + a[i];
    }
    return a_reverse;
}

int main_2()
{

    string a, b;
    cin >> a >> b;

    string a_reverse = reverse_string(a);

    cout << a << " " << b << endl;

    int min_leng_a_b = a.length();
    if (b.length() < min_leng_a_b)
    {
        min_leng_a_b = b.length();
    }

    int so_luong_trung_nhau = 0;
    for (int i = 0; i < min_leng_a_b; i++)
    {
        if (b[i] == a_reverse[i])
        {
            so_luong_trung_nhau++;
        }
        else
        {
            break;
        }
    }

    cout << "index_trung_nhau " << so_luong_trung_nhau << endl;

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
    vector_xy(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void print_do_dai()
    {
        float ket_qua = sqrt(x * x + y * y);
        cout << fixed << setprecision(2) << ket_qua << endl;
    }
};

int tich_vo_huong(vector_xy a, vector_xy b)
{
    int ket_qua = a.x * b.x + a.y * b.y;
    return ket_qua;
}

int main()
{
    vector_xy a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    a.print_do_dai();
    b.print_do_dai();
    cout << tich_vo_huong(a, b) << endl;
}