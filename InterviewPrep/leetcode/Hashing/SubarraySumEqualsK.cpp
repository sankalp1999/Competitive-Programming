

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        long long int sum = 0;
        int count = 0;
        m[0] = 1;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            if(m.find(sum-k) != m.end())
            {
                count += m[sum-k];
            }
            
            m[sum] = m[sum] + 1;
        }
        return count;
    }
};
