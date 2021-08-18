#include <iostream>
using namespace std;
int main()
{
    long int x;
    cin >> x;
    for (unsigned long long int i = 1; i < 1000000000000000000; i++)
    {
        if ((i * i) > x)
        {
            cout << i - 1;
            if ((i * i == x))
            {
                cout<<i;
            }
                break;
        }
    }
    return 0;
}