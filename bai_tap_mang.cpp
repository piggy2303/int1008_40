#include <iostream>
#include <vector>
using namespace std;

bool search_array(vector<int> a, int search_key)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == search_key)
        {
            return true;
        }
    }
    return false;
}

bool search_normal_array(int a[], int search_key, int n)
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

int couting_key_in_array(int a[], int search_key, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == search_key)
        {
            count++;
        }
    }
    return count;
}

int main_1()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // mang unique co roi thoi => khong them
    // mang unique chua co => minh them
    // option 1: using vector
    vector<int> a_unique;

    for (int i = 0; i < n; i++)
    {
        if (search_array(a_unique, a[i]))
        {
            cout << "co roi khong them " << a[i] << endl;
        }
        else
        {
            cout << "chua co them " << a[i] << endl;
            a_unique.push_back(a[i]);
        }
    }

    for (int i = 0; i < a_unique.size(); i++)
    {
        cout << "phan tu " << a_unique[i]
             << " xuat hien " << couting_key_in_array(a, a_unique[i], n)
             << endl;
    }
    cout << endl;

    // option 2: using normal array
    cout << endl
         << endl
         << "option 2: using normal array" << endl;
    int b_unique[n];
    b_unique[0] = a[0];
    int b_unique_size = 1;

    for (int i = 1; i < n; i++)
    {
        if (search_normal_array(b_unique, a[i], b_unique_size))
        {
            cout << "co roi khong them " << a[i] << endl;
        }
        else
        {
            cout << "chua co them " << a[i] << endl;
            b_unique[b_unique_size] = a[i];
            b_unique_size++;
        }
    }

    for (int i = 0; i < b_unique_size; i++)
    {
        cout << "phan tu " << b_unique[i]
             << " xuat hien " << couting_key_in_array(a, a_unique[i], n)
             << endl;
    }
    cout << endl;

    // 3 2 3 1 2
    // 3 2 1

    // 3 2
    // 2 2
    // 1 1

    return 0;
}

int main_2()
{
    int n;
    cin >> n;
    int a[n];
    float tong = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    float tb = tong / n;
    // cout << tb << endl;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= tb)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}

void normalize(double *out, int *in, int n)
{
    for (int i = 0; i < n; i++)
    {
        out[i] = (double)in[i] / 255;
        // cout << in[i] << endl;
    }
}

void normalize_arr(double out[], int in[], int n)
{
    for (int i = 0; i < n; i++)
    {
        out[i] = (double)in[i] / 255;
    }
}

void reverse(char *s)
{

    // buoc 1 : dem co bao nhieu ky tu
    int count = 0;
    while ((int)s[count] != 0)
    {
        count++;
    }
    // cout << i << endl;

    char *a = new char[count + 1];
    for (int i = 0; i < count; i++)
    {
        a[i] = s[count - i - 1];
        // cout << a[i] << endl;
    }

    for (int i = 0; i < count; i++)
    {
        s[i] = a[i];
        // cout << s[i] << endl;
    }
}

int main()
{
    char a[] = "abc";
    char *iPtr = a;
    reverse(iPtr);

    return 0;
}

int main_3()
{
    int n = 3;
    int numbers[] = {11, 22, 33};
    int *iPtr = numbers;
    double numbers_norm[n];
    double *iPtr_norm = numbers_norm;

    normalize(iPtr_norm, iPtr, n);

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " " << numbers_norm[i] << endl;
    }

    return 0;
}