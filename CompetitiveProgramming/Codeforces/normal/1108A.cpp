#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if( b == c)
        {
            c += 1;
            // possible since l < r that is guranteed
        }
        cout << b << " " << c << endl;
        
    }
}