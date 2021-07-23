#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << 2 * a << endl;
    cout << setprecision(2) << fixed << 2 * a * 3.14 << endl;
    cout << setprecision(2) << fixed << 3.14 * a * a << endl;
    return 0;
}