class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n , 1); // dp array which stores the lis till that index
                               // or on that sequence
        vector<int> count(n, 1);
        int res = 0 ;
        int MaxLengthTillNow = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(nums[i] > nums[j])
                {
                    if(dp[j]  + 1 > dp[i])
                    {
                        dp[i] = dp[j] + 1;
                        // This implies we found a new lis
                        // So, take the count of the lis's stored in it.
                        count[i] = count[j];
                    }
                    else if(dp[j] + 1 == dp[i])// same length of lis, then ad
                    {
                        count[i] += count[j];
                    }
                }
            }
            // Now, multiple indexes can have the same length of lis
            // So, we need to add that.
            if(MaxLengthTillNow == dp[i])
            {
                res +=  count[i];
            }
            if(MaxLengthTillNow < dp[i])
            {
                res = count[i];
                MaxLengthTillNow = dp[i];
            }
        }
        
        return res;
        
        
    }
};
