class Solution {
public:
    
    int partition(vector<int>& nums, int k, int low, int high){
        int pivot = low;
        for(int i = low + 1; i <= high; i++){
            if(nums[i] <= nums[pivot]){
                swap(nums[++low], nums[i]);
            }
        }
        swap(nums[low], nums[pivot] );
        return low;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
      int low = 0;
      int high = nums.size() - 1;
      int pos = nums.size() - k ;
        int newpos;
      while(low <= high){
          
          newpos = partition(nums, k, low, high);
          
          if(newpos == pos)return nums[newpos];
          if(newpos < pos)
          {
              low = newpos + 1;
          }
          else
          {
              high = newpos - 1;
          }
      }
          return nums[newpos];
    }
  
};
