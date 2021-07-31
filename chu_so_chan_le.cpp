#include <iostream>
#include <iomanip>

using namespace std;

void dem_chan_le(string a)
{
    int count_chan = 0, count_le = 0;

    for (int i = 0; i < a.length(); i++)
    {
        // 0 -> 48, 1=>49
        int nn = (int)a[i];

        if (nn % 2 == 0)
        {
            count_chan++;
        }
        else
        {
            count_le++;
        }
    }

    cout << count_chan << " " << count_le << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        dem_chan_le(a);
    }

    return 0;
}