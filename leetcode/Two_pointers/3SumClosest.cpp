class Solution {
public:
    int threeSumClosest(vector<int>& nums, int K) {
    
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int min_num = INT_MAX;
    int min_diff = INT_MAX;
    int sum1 = 0;
    for(int i = 0;i < n-2; i++)
    {
        int target = K - nums[i];
        int low = i+1;
        int high = n - 1;
        while(low < high)
        {

            int diff = abs(target - nums[low] - nums[high] );
            if(diff < min_diff)
            {
                min_diff = diff;
                sum1 = nums[low] + nums[high] + nums[i];
            }
            if(nums[low] + nums[high] < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
        return sum1;        

    }
};
