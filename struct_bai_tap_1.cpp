// #include <math.h>
// #include <iostream>

// using namespace std;

// struct sinh_vien
// {
//     int age;
//     int can_nang;
//     int chieu_cao;

//     sinh_vien()
//     {
//         cout << "contructor 0 param" << endl;
//         age = 1;
//         can_nang = 1;
//         chieu_cao = 1;
//     }

//     sinh_vien(int a, int b, int c)
//     {
//         cout << "contructor 3 param" << endl;
//         age = a;
//         can_nang = b;
//         chieu_cao = c;
//     }

//     void say_hello()
//     {
//         cout << "hello" << endl;
//     }
// };

// struct toa_do
// {
//     int x, y;

//     toa_do()
//     {
//         x = 0;
//         y = 0;
//     }

//     toa_do(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     float khoang_cach_with_other_toa_do(toa_do A)
//     {
//         float ket_qua = (A.x - x) * (A.x - x) + (A.y - y) * (A.y - y);
//         ket_qua = sqrt(ket_qua);
//         return ket_qua;
//     }
// };

// float khoang_cach(toa_do A, toa_do B)
// {
//     float ket_qua = (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
//     ket_qua = sqrt(ket_qua);
//     return ket_qua;
// }

// struct tam_giac
// {
//     toa_do A, B, C;

//     bool check_tam_can()
//     {
//         float A_B = khoang_cach(A, B);
//         float B_C = khoang_cach(B, C);
//         float C_A = khoang_cach(C, A);

//         if (A_B == B_C || B_C == C_A || C_A == A_B)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int ucln(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }
//     else if (b == 0)
//     {
//         return a;
//     }
//     else
//     {
//         if (a > b)
//         {
//             return ucln(b, a % b);
//         }
//         else
//         {
//             return ucln(b % a, a);
//         }
//     }
// }

// struct phan_so
// {
//     int tu, mau;
//     phan_so()
//     {
//         tu = 1;
//         mau = 1;
//     }

//     phan_so(int a, int b)
//     {
//         tu = a;
//         mau = b;
//     }

//     void toi_gian()
//     {
//         int x = ucln(tu, mau);
//         tu = tu / x;
//         mau = mau / x;
//     }

//     void add_phan_so(phan_so B)
//     {
//         int new_mau = mau * B.mau;
//         int new_tu = tu * B.mau + mau * B.tu;

//         mau = new_mau;
//         tu = new_tu;

//         toi_gian();
//     }

//     void print_phan_so()
//     {
//         // 2/1 => 2
//         // 0/3 => 0

//         cout << tu << "/" << mau << endl;
//     }
// };

// phan_so tong_2_phan_so(phan_so A, phan_so B)
// {
//     phan_so ket_qua;

//     ket_qua.mau = A.mau * B.mau;
//     ket_qua.tu = A.tu * B.mau + A.mau * B.tu;
//     ket_qua.toi_gian();
//     return ket_qua;
// }

// int main()
// {
//     phan_so A(1, 2), B(3, 4);

//     // phan_so tong = tong_2_phan_so(A, B);
//     // tong.print_phan_so();

//     A.add_phan_so(B);

//     A.print_phan_so();

//     // cin >> A.tu >> A.mau >> B.tu >> B.mau;

//     // toa_do A(1, 1), B(2, 1), C;

//     // cout << A.x << endl;
//     // cout << C.y << endl;

//     // cout << khoang_cach(A, C) << endl;
//     // cout << A.khoang_cach_with_other_toa_do(C) << endl;

//     // tam_giac ABC;
//     // ABC.A = toa_do(0, 0);
//     // ABC.B = toa_do(1, 0);
//     // ABC.C = toa_do(0, 1);

//     // cout << boolalpha << ABC.check_tam_can() << endl;

//     // sinh_vien tuan_anh(3, 3, 3);

//     // cout << tuan_anh.age << endl;

//     // tuan_anh.say_hello();

//     // cin >> tuan_anh.age;
//     // cout << tuan_anh.age;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    b = 2 * a - 1;

    while (a > 0)
    {
        for (int i = 1; i <= b; i++)
        {
            cout << "=";
        }
        a--;
        b -= 2;
        cout << endl;
    }
    return 0;
}