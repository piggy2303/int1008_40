#include <iostream>
#include <vector>

using namespace std;

void thay_doi_so(int a)
{
    a = 10;
}

void nhap_vao_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

bool search_array(int a[], int search_key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search_key)
        {
            return true;
        }
    }

    return false;
}

int search_min(int a[], int n)
{
    // int min = 100; arr = {200,300,400}
    // int max = 0; arr = {-1,-2,-3}
    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int search_max(int a[], int n)
{
    // int min = 100; arr = {200,300,400}
    // int max = 0; arr = {-1,-2,-3}
    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    return min;
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        //  doi cho a[i] a[min_index]
        int c = a[min_index];
        a[min_index] = a[i];
        a[i] = c;
    }
}

void bubble_sort(int a[], int n)
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

int main()
{
    int n = 6;
    int arr[] = {6, 5, 4, 3, 2, 1};
    bubble_sort(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int a = 1;
    // thay_doi_so(a);
    // cout << a << endl;
    // int n = 4;
    // int a[n];

    // nhap_vao_mang(a, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // cout << boolalpha << search_array(a, 8, n) << endl;
    // cout << boolalpha << search_array(a, 3, n) << endl;
    // cout << "min la " << search_min(a, n) << endl;
    // cout << "max la " << search_max(a, n) << endl;

    // int a = 10, b = 20;
    // int c = b;
    // b = a;
    // a = c;
    // a = a + b; // a = 30 , b =20
    // b = a - b; // b = 10, a = 30
    // a = a - b; // a =20 , b =10
    // cout << a << " " << b << endl;

    // vector<int> a;
    // cout << a.size() << endl;

    // a.push_back(3);
    // cout << a.size() << endl;

    // a.push_back(3);
    // cout << a.size() << endl;

    // a.push_back(2);
    // cout << a.size() << endl;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // int so_luong_sinh_vien = 0;
    // int diem_so[100];

    // int n;
    // while (true)
    // {
    //     cin >> n;
    //     if (n == -1)
    //     {
    //         break;
    //     }

    //     cout << "so_luong_sinh_vien " << so_luong_sinh_vien << endl;

    //     diem_so[so_luong_sinh_vien] = n;

    //     cout << "diem_so= " << diem_so[so_luong_sinh_vien] << endl;

    //     so_luong_sinh_vien++;
    // }

    // for (int i = 0; i < so_luong_sinh_vien; i++)
    // {
    //     cout << diem_so[i] << " ";
    // }
    // cout << endl;

    // int n = 5;
    // int a[] = {4, 3, 1, 2, 5};

    // // selection_sort(a, n);
    // bubble_sort(a, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // int a = 1;
    // thay_doi_so(a);
    // cout << a;

    // int a;
    // nhap_vao_so(a);
    // cout << a << endl;

    // int n = 4;
    // int a[n];
    // nhap_vao_mang(a, n);
    // cout << "min" << search_min(a, n) << endl;

    // int a = 1, b = 2;

    // int c = b;
    // b = a;
    // a = c;
    // cout << a << " " << b << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }

    // cout << boolalpha << search_array(a, 3, n) << endl;

    // int a, b, c, d, e;

    // cin >> a >> b >> c >> d >> e;

    // khai bao tinh
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};

    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // mac dinh con arr co bao nhieu phan tu

    // int n;
    // cin >> n;
    // if (n < 0)
    // {
    //     n = 1;
    // }
    // int arr_2[n];

    // int arr_3[] = {0, 1, 2, 3, 4, 5};

    // for (int i = 0; i < 15; i++)
    // {
    //     // cout << arr_3[i] << endl;
    //     cout << rand() % 6 << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}