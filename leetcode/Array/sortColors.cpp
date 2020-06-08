class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        /*
        Break the array into four sub-arrays
        bottom group   0 --> smaller
        middle group   smaller --> equal
        unclassified group equal +1 : unclassified
        top group  unclassified + 1 : end
        */
       int smaller = 0;
       int equal = 0;
       int larger = nums.size();
        int pivot_val = 1;
        while(equal < larger)
       {
           if(nums[equal] == pivot_val)
           {
               equal++;
           }
            else if(nums[equal] > pivot_val )
            {
                swap(nums[--larger],nums[equal] );
            }
            else if(nums[equal] < pivot_val)
            {
                swap(nums[smaller++], nums[equal++]);
            }
       } 
        
     
        
    }
};
