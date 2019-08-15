#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    int count = 0;
    cin >> a >> b >> c >> d;
    if ( a == b || a == c || a == d)
    {
        count++;
    }
    if (b == c || b == d )
    {
        count++;
    }
    if(c == d )
    {
        count++;
    }
    cout << count << endl;
}