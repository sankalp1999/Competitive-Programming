#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int dp[200][200] = {0};
int lcs2d(int a[], int b[], int n, int m)
{
    int i, j;
    vector<pair<int,int>> back;
    for (i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                // back.push_back({i, j});
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // for (int i = 0; i < back.size();i++)
    // {
        // cout << back[i].first << " " << back[i].second << " " << a[min(back[i].first, back[i].second)];
        // cout << endl;
    // }
    return dp[n][m];
}
int main()
{
    int n;
    int m;
    cin >> n ;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << lcs2d(a, b, n, m) << endl;
}