#include <iostream>
using namespace std;

int tong_2_so(int x, int y)
{
    float aa = 3.2;
    cout << "trong ham " << aa << endl;

    return aa;
}

void so_chan_le(int x)
{
    if (x % 2 == 0)
    {
        cout << "so chan" << endl;
    }
    else
    {
        cout << "so le" << endl;
    }
}

int main()
{
    int a = 1, b = 2;

    tong_2_so(a, b);

    return 0;
}
