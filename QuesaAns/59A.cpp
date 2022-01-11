#include <iostream>
using namespace std;
int main()
{
    string a;
    int c1 = 0, c2 = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > 96)
        {
            c1++;
        }

        else if (a[i] < 96)
        {
            c2++;
        }
    }
    if (c1 >= c2)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] < 96)
            {
                a[i] = a[i] + 32;
            }
        }
    }

    else if (c2 > c1)
    {

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] > 96)
            {
                a[i] = a[i] - 32;
            }
        }
    }
    cout << a;
    return 0;
}