#include <iostream>
using namespace std;
int main()
{
    int t;
    string a;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]==a[i+1])
            {
                cout<<a[i];
            }
            
        }
    }

    return 0;
}