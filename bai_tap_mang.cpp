#include <iostream>
#include <vector>
#include <iomanip>

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

int main_5()
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

    cout << "a_unique = " << endl;
    for (int i = 0; i < a_unique.size(); i++)
    {
        cout << a_unique[i] << " ";
    }
    cout << endl;

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

int main_6()
{
    int n;
    cin >> n;
    float a[n];
    float tong = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }

    float tb = tong / n;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > tb)
        {
            cout << fixed << setprecision(2) << a[i] << " ";
        }
    }

    return 0;
}

int main_7()
{
    int m, n, k;
    cin >> m >> n >> k;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        cout << arr[a][b] << endl;
    }
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

int main_8()
{
    int n = 4;
    int a[] = {0, 1, 2, 3};
    double b[4];

    int *pa = a;
    double *pb = b;

    // normalize_arr(b, a, n);
    normalize(pb, pa, n);

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
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

void delete_char(char *s, char c)
{
    int count = 0;
    int count_khac_c = 0;
    while (true)
    {
        if ((int)s[count] == 0)
        {
            break;
        }

        if (s[count] != c)
        {
            count_khac_c++;
        }
        count++;
    }
    // cout << count << " " << count_khac_c << endl;

    char *temp = new char[count_khac_c + 1];
    int j = 0;
    for (int i = 0; i < count; i++)
    {
        if (s[i] != c)
        {
            temp[j] = s[i];
            j++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i < j)
        {
            s[i] = temp[i];
        }
        else
        {
            s[i] = (char)0;
        }

        // cout << s[i] << " ";
    }
}

int main_4()
{
    char a[] = "bbcaaa";
    char c = 'a';

    // cout << (a[0] == c) << endl;

    char *iPtr = a;
    // reverse(iPtr);
    delete_char(iPtr, c);

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