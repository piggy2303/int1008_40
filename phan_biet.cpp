#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        int k = i++;
        // lam hanh dong k = i truoc
        // sau do tang i len 1
        // k => 0 1 2 3 4

        int k = ++i;
        // lam hanh dong ++i len truoc
        // sau do moi gan k = i
        // k => 1 2 3 4 5

        cout << k << endl;
    }

    return 0;
}