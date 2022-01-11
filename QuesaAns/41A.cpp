#include <iostream>
using namespace std;
int main()
{
    string s, t;
    int j;
    cin >> s >> t;
    for (int i = s.length() - 1, j = 0; i <= 0, j < t.length(); i--, j++)
    {
        if (s[i] != t[j])
        {
            cout << "NO";
            break;
        }
        else if (i == 0)
        {
            cout << "YES";
            break;
        }
    }

    return 0;
}