#include <iostream>
using namespace std;
int main()
{

    int a[5][5], s = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 1)
            {
// abs is a function for making negative integer to positive integer.

                s = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << s;
    return 0;
}