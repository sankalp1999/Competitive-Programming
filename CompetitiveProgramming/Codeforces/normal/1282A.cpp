#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {   int a, b, c, r;
        cin >> a >> b >> c >> r;
        int dmin, dmax;
        int x = a;
        a = min(a,b);
        b = max(x,b);
        dmin = c - r;
        dmax = c + r;
        if(dmin <= a && dmax >= b)
        {
            cout << 0 << endl;
        }
        else if(dmin >= a && dmax <= b)
        {
            cout << (b-a )- (dmax - dmin) << endl;
        }
        else if(dmax < a )
        {
            cout << b - a << endl;

        }
        else if(dmin > b)
        {
            cout << b- a << endl;
        }
        else if(dmin >= a && dmax >= b)
        {
            cout << (b- a)- (b - dmin) << endl;
        }
        else if(dmax >= a && dmax <= b)
        {
            cout << (b-a)-(dmax - a) << endl;
        }
    }

}