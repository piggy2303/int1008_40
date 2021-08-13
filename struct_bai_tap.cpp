#include <math.h>
#include <iostream>

using namespace std;

struct sinh_vien
{
    int age;
    int can_nang;
    int chieu_cao;

    sinh_vien()
    {
        cout << "day la contructor sinh vien" << endl;
        age = 0;
        can_nang = 2;
        chieu_cao = 4;
    }

    sinh_vien(int age_input)
    {
        cout << "day la contructor sinh vien co bien dau vao" << endl;
        age = age_input;
    }

    sinh_vien(int age_input, int can_nang_input)
    {
        cout << "day la contructor sinh vien co 2 bien dau vao" << endl;
        age = age_input;
        can_nang = can_nang_input;
    }

    void sinh_nhat()
    {
        age++;
    }

    void sum_age_with_other_sinhvien(sinh_vien b)
    {
        cout << age + b.age << endl;
    }
};

void sum_age(sinh_vien a, sinh_vien b)
{
    cout << a.age + b.age << endl;
}

struct toa_do
{
    int x, y;

    toa_do()
    {
        x = 0;
        y = 0;
    }

    toa_do(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

float do_dai_2_diem(toa_do A, toa_do B)
{

    float result = (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
    result = sqrt(result);
    return result;
}

struct tam_giac
{
    toa_do A, B, C;

    bool check_3_diem_trung_nhau()
    {
        if (A.x == B.x && B.x == C.x && A.y == C.y && A.y == B.y)
        {
            cout << "3 diem trung nhau" << endl;
            return true;
        }
        else
        {
            cout << "3 diem khong trung nhau" << endl;
            return false;
        }
    }

    // check tam giac deu

    bool check_tam_giac_deu()
    {
        float do_dai_AB = do_dai_2_diem(A, B);
        float do_dai_BC = do_dai_2_diem(B, C);
        float do_dai_CA = do_dai_2_diem(C, A);
        return (do_dai_AB == do_dai_BC && do_dai_CA == do_dai_AB);
    }

    bool check_tam_can()
    {
        float do_dai_AB = do_dai_2_diem(A, B);
        float do_dai_BC = do_dai_2_diem(B, C);
        float do_dai_CA = do_dai_2_diem(C, A);
        return (do_dai_AB == do_dai_BC || do_dai_BC == do_dai_CA || do_dai_CA == do_dai_AB);
    }
};

struct cylinder
{
    double radius, high;

    cylinder(double _radius, double _high)
    {
        radius = _radius;
        high = _high;
        // them code cua ban o day
    }

    double getSurfaceArea()
    {
        double S = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * high;
        return S;
        // them code cua ban o day
    }
    double getVolume()
    {
        double V = 3.14 * radius * radius * high;
        return V;
        // them code cua ban o day
    }
};

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

struct phan_so
{
    int tu_so;
    int mau_so;

    phan_so()
    {
        // cin >> tu_so >> mau_so;
        tu_so = 1;
        mau_so = 1;
    }
    phan_so(int a, int b)
    {
        tu_so = a;
        mau_so = b;
    }

    void toi_gian()
    {
        int x = ucln(tu_so, mau_so);
        tu_so = tu_so / x;
        mau_so = mau_so / x;
    }

    void add_phan_so(phan_so B)
    {
        int new_tu = tu_so * B.mau_so + B.tu_so * mau_so;
        int new_mau = mau_so * B.mau_so;

        tu_so = new_tu;
        mau_so = new_mau;
        toi_gian();
    }

    void print_phan_so()
    {
        // 2/1 => 2
        // 0/3 => 0

        cout << tu_so << "/" << mau_so << endl;
    }

    bool is_greater_than(phan_so B)
    {
        if (tu_so * B.mau_so > B.tu_so * mau_so)
        {
            return true;
        }
        return false;
    }
};

phan_so tong_2_phan_so(phan_so A, phan_so B)
{
    int mau, tu;

    mau = A.mau_so * B.mau_so;
    tu = A.tu_so * B.mau_so + B.tu_so * A.mau_so;

    phan_so ket_qua(tu, mau);
    ket_qua.toi_gian();
    return ket_qua;
}

int main()
{
    phan_so A(1, 2), B(3, 4);

    cout << boolalpha << A.is_greater_than(B) << endl;

    // cin >> A.tu_so >> A.mau_so >> B.tu_so >> B.mau_so;

    // A.print_phan_so();
    // B.print_phan_so();

    // phan_so A(1, 2), B(3, 4);
    // A.add_phan_so(B);
    // A.print_phan_so();

    // phan_so tong = tong_2_phan_so(A, B);

    // tong.print_phan_so();

    // tam_giac ABC;

    // ABC.A = toa_do(0, 0);
    // ABC.B = toa_do(1, 0);
    // ABC.C = toa_do(0, 1);

    // cout << boolalpha << ABC.check_tam_can() << endl;

    // ABC.check_3_diem_trung_nhau();

    // ABC.A = toa_do(1, 2);
    // ABC.B = toa_do(3, 4);

    // cout << ABC.A.x << endl;
    // cout << ABC.B.y << endl;

    // sinh_vien tuan_anh(40);

    // cout << tuan_anh.age << endl;

    // sinh_vien minh_tuan(40, 20);

    // tuan_anh.age = 2;
    // minh_tuan.age = 3;

    // tuan_anh.sinh_nhat();

    // cout << tuan_anh.age << endl;

    // tuan_anh.can_nang = 10;
    // tuan_anh.chieu_cao = 20;

    // sum_age(tuan_anh, minh_tuan);

    // tuan_anh.sum_age_with_other_sinhvien(minh_tuan);

    return 0;
}