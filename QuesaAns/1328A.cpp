#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (; n > 0; n--)
    {
        int count = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }

        else if (a > b)
        {
            cout << b - (a % b) << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }

    return 0;
}