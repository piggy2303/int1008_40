#include <iostream>
#include <string>

using namespace std;

void dem_so_chan_le(string a)
{

    bool doi_xung = true;

    for (int i = 0; i < (a.length() / 2); i++)
    {
        // cout << a[i] << " " << a[a.length() - i - 1] << endl;

        if (a[i] != a[a.length() - i - 1])
        {
            doi_xung = false;
        }
    }

    if (doi_xung)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

void tim_kiem(string a, string b)
{
    bool is_found = false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[0])
        {
            cout << i + 1 << endl;
            is_found = true;
            break;
        }
    }
    if (is_found == false)
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        // cout << a << " " << b << endl;

        tim_kiem(a, b);
    }

    return 0;
}