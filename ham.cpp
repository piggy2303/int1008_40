#include <iostream>
using namespace std;

int tong_2_so(int x, int y)
{
    int aa = 4;
    return x + y;
}

void in_ra_chan_le(int a)
{
    if (a % 2 == 0)
    {
        cout << "so_chan" << endl;
    }
    else
    {
        cout << "so_le" << endl;
    }
}

int main()
{
    int a = 1, b = 2;

    cout << tong_2_so(a, b) << endl;
    in_ra_chan_le(a);
    in_ra_chan_le(b);

    cout << aa << endl;

    return 0;
}
