#include <iostream>
using namespace std;
int main()
{
    int n, X = 0;
    string p;
    cin >> n;
    for (; n > 0; n--)
    {
        cin >> p;
        if (p[1]=='+')
        {
            ++X;
        }

        else
        {
            --X;
        }
    }
    cout << X;

    return 0;
}
