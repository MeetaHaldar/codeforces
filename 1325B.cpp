#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        cin >> p;
        int count = 0;
        int a[p];
        for (int i = 0; i < p; i++)
        {
            cin >> a[i];
            if (a[i] != a[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}