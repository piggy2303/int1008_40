#include <iostream>
using namespace std;

void thay_doi_so(int &x)
{
    cout << "trong ham " << x << " " << &x << " " << endl;
    x = 10;
}

void swap_2_number(int &a, int &b)
{
    int c = b;
    b = a;
    a = c;
}

int main()
{
    int a = 10;

    int b = a;

    b++;
    cout << a << " " << b << endl;

    int *p1 = &a;
    int *p2 = p1;
    *p2 = 100;
    cout << a << endl;

    // int a = 1, b = 2;
    // swap_2_number(a, b);
    // cout << a << " " << b << endl;

    // int c = 1;
    // thay_doi_so(c);

    // cout << c << endl;

    // int a = 1;

    // cout << a << endl;
    // cout << &a << endl;

    // int *p1;
    // p1 = &a;

    // cout << p1 << endl;
    // cout << *p1 << endl;

    // thay_doi_so(*p1);
    // cout << a << endl;

    // int a = 1;
    // int *p = &a;

    // cout << &a << endl;

    // thay_doi_so_2(p);
    // cout << a << endl;
    // * dua ra gia tri
    // & dua ra dia chi
    // int x = 1;
    // int *p = &x;

    // cout << "trong main " << *p << " " << &x << endl;

    // thay_doi_so(*p);
    // cout << x << endl;

    // int a = 1, b = 2;
    // cout << a << " " << b << endl;
    // a = b;
    // cout << a << " " << b << endl;
    // a++;
    // cout << a << " " << b << endl;

    // int *pa, *pb;
    // pa = &a;
    // pb = &b;
    // cout << pa << " " << *pa << " " << a << endl;
    // cout << pb << " " << *pb << " " << b << endl;

    // cout << "magic" << endl;

    // pa = pb;

    // cout << pa << " " << *pa << " " << a << endl;
    // cout << pb << " " << *pb << " " << b << endl;

    // cout << "magic2" << endl;

    // *pa = 4;

    // cout << pa << " " << *pa << " " << a << endl;
    // cout << pb << " " << *pb << " " << b << endl;

    // p = &x;
    // *p = *p + 1;

    // cout << x << endl;
    // cout << &x << endl;
    // cout << p << endl;
    // cout << *p << endl;

    return 0;
}