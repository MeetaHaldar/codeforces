#include <iostream>
using namespace std;
int main()
{
    int n, c1 = 0, c2 = 0;
    string a;
    cin >> n >> a;

    for (int i = 0; i < n; i++)

    {
        if (a[i] == 'A')
        {
            c1++;
        }
        else if (a[i] == 'D')
        {
            c2++;
        }
    }

    if (c1 > c2)
    {
        cout << "Anton";
    }
    else if (c2 > c1)
    {
        cout << "Danik";
    }
    else if (c1 == c2)
    {
        cout << "Friendship";
    }
    return 0;
}