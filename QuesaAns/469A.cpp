#include <iostream>
using namespace std;
int main()
{
    int n, a, p;
    cin >> n;
    int b[n];
    cin >> a;
    for (int i = 0; i < a; i++)
    {

        cin >> p;
        b[p - 1] = p;
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {

        cin >> p;
        b[p - 1] = p;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == i + 1)
        {
            if(i==n-1)
            {
                 cout << "I become the guy.";
                 break;
            }
            continue;

        }

        else
        {
            cout << "Oh, my keyboard!";
            break;
        }
    }

    return 0;
}
