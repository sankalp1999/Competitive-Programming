class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        if(obstacleGrid[m-1][n-1] == 1)return 0;
        
        int dp[m][n];
        int flag1 = 0;
        int flag2 = 0;
        dp[0][0] = obstacleGrid[0][0] == 1 ? 0 : 1;
        for(int i = 0; i < m; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                
                if(i ==0 && j == 0)continue;
                
                if(i == 0 )
                {
                    if(obstacleGrid[i][j-1] == 1 || flag1 == 1)
                    {
                        dp[i][j] = 0;
                        flag1= 1;
                    }
                    else
                    {
                        dp[i][j] = 1;
                    }
                }
                else if(j == 0)
                {
                    if(obstacleGrid[i-1][j] == 1 || flag2 == 1)
                    {
                        dp[i][j] = 0;
                        flag2= 1;
                    }
                    else
                    {
                        dp[i][j] = 1;
                    }
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        
            for(int i = 0; i< m ; ++i)
        {
            for(int j = 0 ;j < n ; ++j)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        
        
        for(int i = 1; i < m; ++i)
        {
            for(int j = 1; j < n; ++j )
            {
                if(obstacleGrid[i][j] == 1)continue;
                
                dp[i][j] += obstacleGrid[i-1][j] == 1 ? 0 : dp[i-1][j];
                dp[i][j] += obstacleGrid[i][j-1] == 1 ? 0 : dp[i][j-1];
            }
        }
        

        
        return dp[m-1][n-1];       
    }
};
