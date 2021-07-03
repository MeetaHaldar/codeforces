#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if (((a / 2) % 2) != 0)
        {
            cout << "NO";
           
        }

        else
        {
            cout << "YES";
            for (int i = 1; i <= a / 2; i++)
            {
                cout << 2 * i;
            }
            for (int i = (a / 2) + 1; i = a; i++)
            {
            }
        }
    }
    return 0;
}