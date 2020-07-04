class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();

        int inverse_point = 0 ;
        int dip_num;
        int flag = 0;
        for(int i = n - 1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                inverse_point = i - 1;
                dip_num = nums[i-1];
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int swap_num_index = INT_MAX;
        int swap_num = INT_MAX;
        for(int i = inverse_point; i < n; i++)
        {
            if(nums[i] > dip_num && nums[i] <= swap_num)
            {
                swap_num_index = i;
                swap_num = nums[i];
            }
        }
        swap(nums[swap_num_index], nums[inverse_point]);
        
        reverse(nums.begin() + inverse_point + 1, nums.end());
        
        
    }
};
