#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y , k;
        cin >> x >> y >> k;
        long long int res = (k * y) + (k - 1);
        res =  (res + x - 2)/( (x -1));
        res += k;
        cout << res << endl;
    }
}