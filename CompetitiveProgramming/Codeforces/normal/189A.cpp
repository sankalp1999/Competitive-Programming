#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(4001, 0);
    dp[0] = 0;
    dp[a] = 1;
    dp[b] = 1;
    dp[c] = 1;

    for (int i = 1; i <= n; i++)
    {

        for(int j : {i-a,i-b,i-c})
        {
            if(j >= 0 && dp[j] != 0 )
                dp[i] = max(dp[i], dp[j] + 1);
        }
      
    }
    cout << dp[n];

}
//7 5 5 2