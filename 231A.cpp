#include <iostream>
using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;
    // int b[a][3];
    int p, q, r;
    for (;  a >0; a--)
    {
        cin >> p >> q >> r;
        // cin >> b[1][1] >> b[2][2] >> b[3][3];

        // if (b[i][1] + b[i][2] + b[i][3] >= 2)

        if (p + q + r >= 2)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}