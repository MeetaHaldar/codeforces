#include <iostream>
using namespace std;
int main()
{
    int count=0;
    unsigned long long int n,a=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        a=a*10+i;

        if (a%3==0)
        {
           count++;
        }
        
        
    }
    cout<<count<<endl;
    return 0;
}