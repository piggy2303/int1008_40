#include <iostream>
using namespace std;

void thay_doi_so(int &x)
{
    cout << "trong ham " << x << " " << &x << " " << endl;
    x = 10;
}

void thay_doi_so_2(int *x)
{
    cout << "thay_doi_so_2 "
         << *x << " "
         << x << endl;
    int b = 10;
    x = &b;
}

int main()
{
    int a = 1;
    int *p = &a;

    cout << &a << endl;

    thay_doi_so_2(p);
    cout << a << endl;
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