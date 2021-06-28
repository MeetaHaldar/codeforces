#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cin >> x;
    // while (x >5)
    // {
    //     x = x - 5;
    //     count++;
    // }
    // cout << count + 1;


    // it is more efficient .
    if (x % 5 == 0)
    {
        cout << x / 5;
    }
    else
    {
        cout << (x / 5) + 1;
    }
    return 0;
}