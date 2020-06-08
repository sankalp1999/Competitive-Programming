class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // first try the brute force 
        // i feel we do a left pass
        // swap all elements to the left
        // pivot index???
        
        int left = 0; ;
         int  pivot = 1;
        int right = nums.size() - 1;
        for(int i = 0 ;i < nums.size(); i++)
        {
            if(nums[i] < pivot)
            {
                swap(nums[i], nums[left++]);
            }
            else if(nums[nums.size() - i - 1] > pivot)
            {
                swap(nums[nums.size() - i], nums[right--]);
            }
        }
        
     
        
    }
};
