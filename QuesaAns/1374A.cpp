#include <iostream>
using namespace std;
int main()
{
    long int x, y, n, t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;

        for (int i = n; i <= n; --i)
        {
            if (x >= n)
            {
                cout << 0 << endl;
                break;
            }
            else if (i % x == y)
            {
                cout << i << endl;

                break;
            }
        }
    }
    return 0;
}