class Solution {
public:
    int flag  = 0;
    void dfs(vector<vector<int>>& subsets, vector<int>& nums, int i, vector<int>& p)
    {
        if( i == nums.size())
        {
            subsets.push_back(p);
            return;
        }
        p.push_back(nums[i]);
        dfs(subsets, nums, i + 1, p);
        p.pop_back(); // restore

    
        if(p.size() > 0 && p.back() == nums[i])return ; //  Here, we cut off the branch where the last number was same.
        
        // not choosing or moving forward
        dfs(subsets, nums, i + 1 , p);
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> subsets;
        vector<int> p;
        sort(nums.begin(), nums.end());
        dfs(subsets, nums, 0, p);
        return subsets;
    }
};
