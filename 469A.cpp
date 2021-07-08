#include <iostream>
using namespace std;
int main()
{
    int n, k, p, j, t;
    cin >> n;

    cin >> k;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    cin >> p;
    int b[p];
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
    }

    for (int i = 0, j = 1, t = 0; i < k, j <= n, t < p; i++, j++, t++)
    {
        if (( j != a[i] && j = b[t] ) || ( j != b[t] && j = a[i] ))
        {
            cout << "Oh, my keyboard!";
        }
    }

    return 0;
}
