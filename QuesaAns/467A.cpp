#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        // as atleast two place should be blank.
        if (b - a >= 2)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}