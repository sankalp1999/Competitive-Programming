/*
Main logic
1. If dp[j - arr[i]] is possible to make, then we can include or add arr[i] to this subset and make 
   dp[j] = 1
   
*/


class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        long long int sum = accumulate(nums.begin(),nums.end(), 0);
        if(sum & 1)return false;
        
        long long int m = sum/2;
        bool dp[m+1];
        for(int i = 0; i <= m; i++)
        {
            dp[i]=false;
        }
        dp[0]=true; // Always possible using an empty subset
        
        for(int i = 0; i < nums.size(); i++)
        {
            int curr = nums[i];
            for(int j = m; j >= nums[i]; j--)
            {
                if(dp[j-curr] == 0 || dp[j] == 1)continue;
                // dp[j-curr] == 0 is to check whether it is possible 
                // to make a subset using dp[j-curr]
                
                // if dp[j] is already 1, then skip
                
                else dp[j]=1; // otherwise, dp[j-curr] == 1 so, we can 
                              // choose curr or nums[i] and make our sum;
            }
        }
        return dp[m];
        
    }
};
