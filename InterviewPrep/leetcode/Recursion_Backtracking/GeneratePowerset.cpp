/*
This code simulates taking the element or not taking the element.
This is a brute force attempt where we attempt to 
calculate all the subsets where we didn't consider a particular element.
Then, we do consider a particular element.

Choose or not choose

Recurrence relation C(n) = 2 * C(n-1) 
Time and space complexity : O( 2 ^ n ) solution.

*/
class Solution {
public:
    vector<vector<int>> p;
    int numsize;
        void subset ( vector<int> v , int n, vector<int> arr)
    {
        if(n == numsize) // base case
        {
            p.push_back(v);
            return;
        }
        v.push_back(arr[n]); // select the element and generate subset
        subset(v, n+1, arr);
        v.pop_back();  // don't select the element and generate subset
        subset(v, n + 1, arr);
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> v;
        numsize = nums.size();
        subset(v, 0, nums);
        return p;
        
    }
};


/* Solution 2
Based on a similar logic
*/

class Solution {
public:
    
    void dfs(vector<vector<int>>& subsets, vector<int>& current, vector<int>& nums, int index)
    {
        subsets.push_back(current);
        for(int i = index; i < nums.size(); i++)
        {
            current.push_back(nums[i]);
            dfs(subsets, current, nums, i + 1);
            current.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> subsets;
        vector<int> current;
        
        dfs(subsets, current, nums, 0);
        return subsets;
    }
};
