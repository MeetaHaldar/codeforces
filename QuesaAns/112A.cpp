#include <iostream>
using namespace std;
int main()
{
    string a, b;

    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > 96)
        {
            a[i] = a[i] - 32;
        }
        if (b[i] > 96)
        {
            b[i] = b[i] - 32;
        }
    }

    if (a == b)
    {
        cout << "0";
    }
    if (a > b)
    {
        cout << "1";
    }
    if (a < b)
    {
        cout << "-1";
    }

    return 0;
}