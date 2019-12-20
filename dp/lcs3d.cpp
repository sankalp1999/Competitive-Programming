#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int dp[200][200][200] = {10000000};
int lcs3d(int a[], int b[],int c[], int n, int m, int o)
{
    int i, j, k;
    // vector<pair<int,int>> back;
    for (i = 0; i <= n; i++)
    {
        dp[i][0][0] = 0;
    }
    for (j = 0; j <= m; j++)
    {
        dp[0][j][0] = 0;
    }
     for (k = 0; k <= o; k++)
    {
        dp[0][0][k] = 0;
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= o; k++)
                
            {

                if (a[i - 1] == b[j - 1] &&b[j - 1]  == c[k - 1])

                {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    // back.push_back({i, j});
                }
                else
                {
                    dp[i][j][k] = max(max(dp[i-1][j][k],dp[i][j-1][k]), dp[i][j][k-1]); 
                }
            }
        }
    }
    // for (int i = 0; i < back.size();i++)
    // {
        // cout << back[i].first << " " << back[i].second << " " << a[min(back[i].first, back[i].second)];
        // cout << endl;
    // }
    return dp[n][m][o];
}
int main()
{
    int n;
    int m;
    int o;
    cin >> n;
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
    cin >> o;
    int c[o];
    for (int i = 0; i < o; i++)
    {
        cin >> c[i];
    }
    cout << lcs3d(a, b, c, n, m, o) << endl;
}