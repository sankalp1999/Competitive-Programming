#include <bits/stdc++.h>
using namespace std;

long long int dp[201][201][201];
long long int res = 0;
long long int solve(vector<int> &a, vector<int> &b, vector<int> &c, int i, int j, int k)
{
    
    if(dp[i][j][k] != -1)
    return dp[i][j][k];

    long long int ans = 0;

    // Simple directed recursion, if choose r,g then we increment pointer, next state (r + 1, g + 1) and so on.


    if(i  < a.size() && j  < b.size())
        ans = max(ans, solve(a, b, c, i + 1, j + 1, k) + a[i] * b[j]) ; // If i  == a.size( ) - 1 rn, then next 
                                                                       // iteration, it's gonna be i == a.size() and won't enter if.

    if(j  < b.size() && k  < c.size())
        ans = max(ans, solve(a, b, c, i, j + 1, k + 1) + b[j] * c[k]);

    if(i < a.size() && k < c.size())
    ans = max(ans, solve(a, b, c, i + 1, j , k + 1) + a[i] * c[k] );

    // cout << ans << endl;
    // res += ans;
    // cout << res << endl;
    return (dp[i][j][k] = ans);
}


int main() {
	int r,g,t;
	cin >> r >> g >> t;
	vector<int> a(r);
	vector<int> b(g);
	vector<int> c(t);
    for (int i = 0; i < 201; i++)
    {
        for (int j = 0; j < 201; j++)
        {
            for (int k = 0; k < 201; k++)
            {
                dp[i][j][k] = -1;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
    }
    
	for(int i = 0; i < g; i++)
	{
		cin >> b[i];
	}

	for(int i = 0; i < t; i++)
	{
		cin >> c[i];
	}
    // We might miss some optimal states in cross DP
	sort(a.begin(), a.end(),greater<int>());
	sort(b.begin(), b.end(),greater<int>());
	sort(c.begin(), c.end(),greater<int>());

    // We need to consider all possibilities because theres a possibility 
    // that we may end up the smaller arrays with max elements.
    // But, if we chose optimally, then we could have been 
    // left with some elements which led to better result.
    cout << solve(a, b, c, 0, 0, 0) << endl
    ;

    return 0;
}