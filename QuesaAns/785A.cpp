#include <iostream>
using namespace std;
int main()
{

    int n, s = 0;
    cin >> n;

    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "Tetrahedron")
        {
            s = s + 4;
        }

        else if (a == "Cube")
        {
            s = s + 6;
        }
        else if (a == "Octahedron")
        {
            s = s + 8;
        }
        else if (a == "Dodecahedron")
        {
            s = s + 12;
        }
        else if (a == "Icosahedron")
        {
            s = s + 20;
        }
    }

    cout << s;
    return 0;
}