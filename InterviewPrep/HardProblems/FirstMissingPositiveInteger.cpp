class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
       
        int n = nums.size();
        int one = 1; // check for one.
        for(int i = 0 ;i < n; i++)
        {
            if(nums[i] == 1)one = 0;
            if(nums[i] <= 0 || nums[i] > n)
            {
                nums[i]=n+1; // if negative or more than n, mark n+1
            }
        }
        if(one == 1) // one not present
            return 1;
        
        for(int i = 0 ; i < n; i++)
        {
            
            int index = abs(nums[i]); // take abs to avoid double negation which will make the entry positive
            if(index > n)continue;
            if(index < n)
            {
                nums[index] = -1*abs(nums[index]);
            }
            else if(index == n)
            {
               nums[0] = -1*abs(nums[0]);
            }
        
        
        }
        // for(int i  : nums)cout << i << " ";
        for(int i = 1 ;i < n; i++)
        {
            if(nums[i]>0)
            {
                return i;
            }
        }
        if(nums[0] > 0)return n;
            
        return n + 1;
/*Second solution*/
/* Keep swapping till element reaches it's original position.*/
/*Atmost 3n swaps. So, time complexity is O(n)*/
        
         int n = A.size();
         for(int i = 0; i < n; ++i)
            while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
                swap(A[i], A[A[i] - 1]);
        
        for(int i = 0; i < n; ++ i)
            if(A[i] != i + 1)
                return i + 1;
        
        return n + 1;
        
        
    }
};
