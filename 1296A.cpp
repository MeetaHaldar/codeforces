#include <iostream>
using namespace std;
int main()
{
    int t, n, e, o;
    cin >> t;
    for (; t > 0; t--)
    {
        e = 0, o = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a[n];
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if (o % 2 != 0 && o >= e)
        {
            cout << "YES" << endl;
        }
        else if (e % 2 == 0 || e % 2 != 0 || o % 2 == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
