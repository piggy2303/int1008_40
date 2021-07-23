#include <iostream>
using namespace std;

int fibo_dequy(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo_dequy(n - 1) + fibo_dequy(n - 2);
    }
}

int main()
{

    return 0;
}