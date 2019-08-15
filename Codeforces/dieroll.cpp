#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    
    int ans = 6 - c + 1;
    if ( ans == 6)
    {
        cout << 1 << "/" << 1;
    }
    else if (ans == 5)
    {
        cout << 5 << "/" << 6;
    }
    else if (ans == 2)
    {
        cout << 1 << "/" << 3;
    }
    else if (ans == 3)
    {
        cout << 1 << "/" << 2;
    }
    else if (ans == 2)
    {
        cout << 1 << "/" << 3;
    }
    else if (ans == 1)
    {
        cout << 1 << "/" << 6;
    }
    else if (ans == 4)
    {
        cout << 2 << "/" << 3;
    }
    else if (ans == 6)
    {
        cout << 1 << "/" << 1 << endl;
    }

    
    
}