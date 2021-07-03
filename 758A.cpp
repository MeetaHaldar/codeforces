#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n], max = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max)
        {
            s = s + max - a[i];
        }
    }
    cout << s;
    return 0;
}