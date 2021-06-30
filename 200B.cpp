#include <iostream>
using namespace std;
int main()
{
    int n, a;
    float sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum = sum + a;
      
    }
    cout << sum / n;
    return 0;
}