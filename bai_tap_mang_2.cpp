#include <iostream>
using namespace std;

void reverse(char *s)
{
    int count = 0;
    while (true)
    {
        if ((int)s[count] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    // cout << count << endl;

    char *temp = new char[count];

    for (int i = 0; i < count; i++)
    {
        temp[i] = s[count - i - 1];
    }

    for (int i = 0; i < count; i++)
    {
        s[i] = temp[i];
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
        else
        {
            if (s[count] != c)
            {
                count_khac_c++;
            }
            count++;
        }
    }

    char *temp = new char[count_khac_c];
    int temp_index = 0;
    for (int i = 0; i < count; i++)
    {
        if (s[i] != c)
        {
            temp[temp_index] = s[i];
            temp_index++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i < temp_index)
        {
            s[i] = temp[i];
        }
        else
        {
            s[i] = (char)0;
        }
    }

    // s = temp;/
    // cout << temp << endl;
    // cout << s << endl;

    // cout << "ky tu " << count << " ky tu khac " << count_khac_c << endl;
}

void trim_left(char *s)
{
    if ((int)s[0] != 32)
    {
    }
    else
    {
        int count = 0;
        while (true)
        {
            if ((int)s[count] == 0)
            {
                break;
            }
            else
            {
                count++;
            }
        }

        char *temp = new char[count];
        int temp_index = 0;

        while (true)
        {
            if ((int)s[temp_index] != 32)
            {
                break;
            }
            else
            {
                temp_index++;
            }
        }
        cout << temp_index << endl;

        int temp_index_2 = 0;
        for (int i = temp_index; i < count; i++)
        {
            temp[temp_index_2] = s[i];
            temp_index_2++;
        }

        for (int i = 0; i < count; i++)
        {
            if (i < temp_index_2)
            {
                s[i] = temp[i];
            }
            else
            {
                s[i] = (char)0;
            }
        }

        for (int i = 0; i < count; i++)
        {
            cout << s[i];
        }
    }
}

int main()
{
    char a[] = "            a    bc     a     ";

    trim_left(a);
    // char c = 'a';

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << (int)a[i] << endl;
    // }

    // delete_char(a, c);
    // reverse(a);

    return 0;
}