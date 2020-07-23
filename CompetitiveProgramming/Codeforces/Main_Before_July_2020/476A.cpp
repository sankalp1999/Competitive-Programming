#include <iostream>
using namespace std;

int main()
{
    int n, m ;
    cin >> n >> m;
    if (n < m )
    {
        cout << -1 << endl;
        return 0;
    }
    int res = n % 2 + n / 2;

    while (res <= n)
    {
        if(res % m == 0)
        {
            cout << res << endl;
            return 0;
        }
        else
        {
            res++;
        }
    
    }
    cout << -1 << endl;
    return 0;
}