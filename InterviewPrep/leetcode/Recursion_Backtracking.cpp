/*
This code simulates taking the element or not taking the element.
This is a brute force attempt where we attempt to 
calculate all the subsets where we didn't consider a particular element.
Then, we do consider a particular element.

Choose or not choose

Time complexity : O( 2 ^ n ) solution.

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
