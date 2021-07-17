#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // cout << "a" << endl;
    // cout << "b" << endl;
    // cout << "c" << endl;

    // bool check_dieu_kien = 3 > 4;

    // // bool a = 0;

    // // cout << a << endl;
    // bool a = ;

    // cout << a << endl;
    // int a;

    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "o ben trong if" << endl;
    // }

    // cout << "o ben ngoai if" << endl;

    // int age;

    // cin >> age;

    // 0 => 18 => khong duoc
    // 18 => 100 => ok

    // if (age < 0 || age >= 100)
    // {
    //     cout << "voly" << endl;
    // }

    // if (age >= 0 && age < 18)
    // {
    //     cout << "khong duoc" << endl;
    // // }
    // int age = 12;

    // if (age >= 18 && age < 100)
    // {
    //     cout << "ok" << endl;
    // }

    // else
    // {
    //     cout << "khong duoc" << endl;
    // }

    // int a = 4;

    // if (a % 3 == 0)
    // {
    //     cout << "chia 3 du 0" << endl;
    // }
    // else if (a % 3 == 1)
    // {
    //     cout << "chia 3 du 1 thu nhat " << endl;
    // }
    // else
    // {
    //     cout << "chia 3 du 2" << endl;
    // }

    // int a = 4;
    // switch (a)
    // {
    // case 0:
    //     cout << "0" << endl;
    //     break;
    // case 1:
    //     cout << "1" << endl;
    //     break;
    // case 2:
    //     cout << "2" << endl;
    //     break;
    // default:
    //     cout << "tat ca nhung thu con lai" << endl;
    //     break;
    // }

    // int thu;
    // cin >> thu;

    // switch (thu)
    // {
    // case 2:                           // if (a == 2) {}
    //     cout << "thu 2" << endl;
    //     break;
    // case 3:                             // if (a == 3) {}
    //     cout << "thu 3" << endl;
    //     break;
    // default:                              // else{}
    //     cout << "cac thu con lai" << endl;
    //     break;
    // }
    // 1 2 3 4 5 6 7 8 9
    // int thu;
    // cin >> thu;
    // switch (thu)
    // {
    // case 2:
    //     cout << "thu 2" << endl;
    //     break;
    // case 3:
    //     cout << "thu 3" << endl;
    //     break;
    // case 4:
    //     cout << "thu 4" << endl;
    //     break;
    // default:
    //     cout << "thu con lai" << endl;
    //     break;
    // }

    // 1 trong 2 thang > 0
    // a > 0 || b > 0 =>>>>> yes

    // a < 0 && b < 0 =>>>>>>> no

    // int a, b;
    // cin >> a >> b;
    // if (a < 0 && b < 0)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    // {
    //     cout << "YES" << endl;
    // }

    // a || b >= 0 =>sai

    // a >= 0 || b >= 0 => dung

    // char a;
    // cin >> a;
    // cout << a << endl;

    // int bang_ma = (int)a;

    // if (bang_ma >= 97 && bang_ma <= 122)
    // {
    //     bang_ma = bang_ma - 32;
    // }
    // cout << bang_ma << endl;

    // char a_moi = (char)bang_ma;
    // cout << a_moi << endl;

    // int b = 40;
    // cout << b << endl;
    // char b_m = (char)b;
    // cout << b_m << endl;

    // cout << a << endl;
    // cout << bang_ma << endl;

    // int a = 97;
    // char int_sang_char = (char)a;

    // cout << a << endl;
    // cout << int_sang_char << endl;

    // float a = 1.12;
    // int b = (int)a;

    // cout << b << endl;

    // 97 => 122 => chu thuong
    // char a;
    // cin >> a;
    // int bang_ma = (int)a;
    // if (bang_ma >= 97 && bang_ma <= 122)
    // {
    //     cout << "magic" << endl;
    //     bang_ma = bang_ma - 32;
    // }

    // char after_magic = (int)bang_ma;

    // cout << after_magic << endl;

    // char str[25];
    // int i;
    // cout << "Nhập vào một chuỗi: ";
    // cin >> str;
    // for (i = 0; i <= strlen(str); i++)
    // {
    //     int so_can_lam = (int)str[i];

    //     if (so_can_lam >= 97 && so_can_lam <= 122)
    //     {
    //         so_can_lam = so_can_lam - 32;
    //     }
    //     str[i] = (char)so_can_lam;
    // }
    // cout << str << endl;

    int ngay, thang;
    cin >> ngay >> thang;

    switch (thang)
    {
    case 1:
        if (ngay <= 19)
        {
            cout << "maket" << endl;
        }
        else
        {
            cout << "baobinh" << endl;
        }
        break;
    case 2:
        if (ngay <= 18)
        {
            cout << "baobinh" << endl;
        }
        else
        {
            cout << "songngu" << endl;
        }
        break;
    }

    // int a = 100;
    // int sqrt_a = sqrt(a);
    // int a_moi = sqrt_a * sqrt_a;
    // if (a_moi == a)
    // {
    //     cout << "a_chinh_phuong" << endl;
    // }
    // else
    // {
    //     cout << "khong phai" << endl;
    // }

    // A = a * 100 + b* 10 +c
    // A' = c*100 + b*10 + a
    // A - A' = 99 (a-c)
    // B=99(a-c)  (99- 891)

    // B = def

    // int A = 901;
    // int c = A % 10;
    // A = A / 10;
    // int b = A % 10;
    // A = A / 10;
    // int a = A % 10;

    // int B = 99 * (a - c);
    // cout << B << endl;

    // if (B <= 99)
    // {
    //     // B = de
    //     // B = 78
    //     // 78%10 => 8
    //     // 78/10 => 7
    //     // B = 10*d + e
    //     // B' = 10*e + d
    //     // => tru cho nhau
    //     // 11(d+e)

    //     int e = B % 10;
    //     int d = B / 10;
    //     int B_va_B_phay = 11 * (d + e);
    //     cout << B_va_B_phay << endl;
    // }
    // else // so co 3 chu so
    // {
    //     // B =fgh
    //     int f, g, h;
    //     // B = 123
    //     // h = 123 % 10 => 3
    //     // g = (123 /10 ) % 10 => 2
    //     // f = 123/100=> 1

    //     // B + B' = 100f + 10g + h + 100h + 10g + f
    //     // 101f + 101h + 20g

    //     h = B % 10;
    //     g = (B / 10);
    //     g = g % 10;
    //     f = B / 100;
    //     int B_va_B_phay = 101 * (f + h) + 20 * g;
    //     cout << B_va_B_phay << endl;
    // }

    // int a = 1;
    // if (true)
    // {
    //     int a = 2;
    //     if (true)
    //     {
    //         cout << a << endl;
    //     }
    // }

    // cout << a << endl;

    // int a;
    // char b;
    // cin >> b;

    // cout << b << endl;

    // int bang_ma_cua_b = (int)b;

    // cout << bang_ma_cua_b << endl;

    // return 0;
}

// if
// ...
// else if
// else if
// else if
// else if
// else if
// else if
// ...
// else