#include <iostream>
using namespace std;
/*
In this problem about simple maths,
we know that the min no. of moves will be as
- n/2 + n%2(if number is odd)
Now, this solution is made by just 2's or (2's and one 1)
So, we decompose these 2's into 1's thus,
increasing the number of steps by 1 each time.
We know that m will be between  n/2 + n%2 and n 
So, we increment by 1 and check for divisibility by m.
If we find, print that number 
else increment

One edge case : if m > n print(-1)
*/



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