#include <iostream>
using namespace std;
int main()
{
    int t;
    string a;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        cout << a[0];

        if (a.length() > 2)
        {
            for (int i = 1; i < a.length() - 1; i += 2)
            {

                cout << a[i];
            }
        }
        cout << a[a.length() - 1] << endl;
    }

    return 0;
}