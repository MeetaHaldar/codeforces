#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // int count = 0;
        // cin >> a >> b;
        // if (a % b == 0)
        // {
        //     cout << "0";
        //     break;
        // }
        else
        {

            while (a % b != 0)
            {
                a = a + 1;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}