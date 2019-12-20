#include <iostream>
#include <vector>
using namespace std;
int knapsack(int W, int weights[], int n)
{

	vector<vector<int>>  dp(n + 1,vector<int>(W + 1));
    int val = 0;

    for(int i = 0; i <= n; i++)
    {

        for(int w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0)
            {
            dp[i][w] = 0;

            }
            else if(w - weights[i-1 ]>= 0)
            {
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-weights[i-1]] + weights[i-1]);
            }
            else
            {
                dp[i][w] = dp[i-1][w] ;
            }

        }
    }
    return dp[n][W];

}
int main()
{
        int w;
        int n;
        cin >> w >> n;
        int val[n];
        for(int i = 0; i < n ; i++)
        {
            cin >> val[i]; // weights of the gold
        }

        cout << knapsack(w, val, n) << endl;
}
