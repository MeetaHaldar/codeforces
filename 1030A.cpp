#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            cout << "HARD";
            break;
        }
        else if (i == n)
        {
            cout << "EASY";
            break;
        }
    }

    return 0;
}
