#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> b;
    }

    for (int i = 0; i < n; i++)
    {
        if (a == n || b == n)
        {
            cout << "I become the guy.";
            break;
        }
        else
        {
            cout << "Oh, my keyboard!";
            break;
        }
    }

    return 0;
}
