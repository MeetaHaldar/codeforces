#include <iostream>
using namespace std;
int main()
{
    int max = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.length() - 2; i++)
    {
        if (a[2 * i] > a[2 + (i * 2)])
        {
            swap(a[2 + (i * 2)], a[2 * i]);
        }
        // cout << a[2 * i] << endl;
        // cout << a[2];
    }
    for (int i = 0; i < a.length() - 2; i++)
    {
        cout << a[2 * i];
        if (i != a.length() - 3)
        {
            cout << "+";
        }
    }

    return 0;
}