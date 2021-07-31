#include <iostream>
#include <string>

using namespace std;

bool is_prime(int a)
{
    for (int i = 2; i < (a - 1); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool check_nguyen_am(char a)
{
    // ueoai
    if (a == 'u')
    {
        return true;
    }
    else if (a == 'e')
    {
        return true;
    }
    else if (a == 'o')
    {
        return true;
    }
    else if (a == 'a')
    {
        return true;
    }
    else if (a == 'i')
    {
        return true;
    }
    else
    {
        return false;
    }
}

string pigLatin(string word)
{
    if (check_nguyen_am(word[0]))
    {
        return word + "way";
    }
    else
    {
        word = word + word[0]
    }
    return word;
}

int main()
{
    string n;
    cin >> n;

    cout << pigLatin(n) << endl;

    return 0;
}