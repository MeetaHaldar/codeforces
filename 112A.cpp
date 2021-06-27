#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int c = a[a.length() - 1];
    int d = b[b.length() - 1];
   
     if (a[a.length() - 1] > 96)
    {
        c = c - 32;
    }
   if (b[b.length() - 1] > 96)
        d = d - 32;

    if (c == d)
    {
        cout << "0";
    }
    else if (c > d)
    {
        cout << "1";
    }

    else
    {
        cout << "-1";
    }

    return 0;
}