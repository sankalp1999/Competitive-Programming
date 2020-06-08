class Solution {
public:

    int Counter(vector<int>& nums, int ele, int low, int high)
    {
        int count = 0;
        for(int i = low; i <= high; i++)
        {
            if(nums[i] == ele)
            {
                count++;
            }
        }
        return count;
    }
    
    int Majority_Decider(vector<int>& nums, int low, int high)
    {
        if(low == high)// Only one element is left
        {
            return nums[low];
        }
        
        // If more than one element, recursively decide which is 
        // the majority element in left and right sub-slices
        int mid = (high - low)/2 + low; // Avoids overflow
        int left = Majority_Decider(nums, low, mid);
        int right = Majority_Decider(nums, mid + 1, high);
        
        if(left == right)return left;
        
        int leftCount = Counter(nums, left, low, high);
        int rightCount = Counter(nums, right, low, high);
        
        return leftCount > rightCount ? left : right ;
    }
    
    
    
    
    int majorityElement(vector<int>& nums) {
      
        int low = 0;
        int high = nums.size() - 1;
        return Majority_Decider(nums, low, high);
       
    }
};
