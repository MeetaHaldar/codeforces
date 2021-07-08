#include <iostream>
using namespace std;
int main()
{
    int n, max = 0, min = 100, s1 = 0, s2 = 0;
    int maxi, mini;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
            maxi = i;
        }
    }
    cout << maxi << endl;
    s1 = maxi+1 -1;

    for (int j = 0; j < n; j++)
    {
        if (min >= a[j])
        {
            min = a[j];

            mini = j;
        }
    }
    cout << mini << endl;
    s2 = (n) - (mini);

    cout << s1 + s2;

    return 0;
}