class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        if(nums.size() == 0)return nums.size();
        
        int index = 1;// First element is always unique
        // The idea is to bypass the duplicates once an element has been seen.
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] != nums[i+1]) // If next element is not same, add it since it is unique
            {
                nums[index++] = nums[i+1];
            }
        }
        return index;
        
    }
};
