class Solution {
public:


    /* We can move only down or right.
       Since, only one way is there to move right in a cell, 
       we initialize the first row with 1 as that is only 1 path.
       In the first column, to reach the last cell, we can only move down. 
       So, again, only 1 way is there to fill these cells.
       Now, to reach a cell dp[i][j], either we can move there from a cell directly above or from a cell
       directly on the left. We are including this cell in the paths of dp[i-1][j] or dp[i][j-1].
       So, no. of unique path for dp[i][j] = dp[i-1][j] + dp[i][j-1]
    */

    int uniquePaths(int m, int n) {
        
       int dp[m][n];
       for(int i = 0;i < m; ++i)
       {
           for(int j = 0; j < n; ++j)
           {
               if(i == 0)dp[i][j]=1;
               else if(j == 0)dp[i][j]=1;
               else dp[i][j] = 0;
           }
       }
       for(int i = 1;i < m; ++i)
       {
           for(int j = 1; j < n; ++j)
           {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
           }
       }
    return dp[m-1][n-1];
        
        
    }
};
