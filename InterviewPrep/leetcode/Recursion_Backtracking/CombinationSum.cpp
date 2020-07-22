class Solution {
public:
    
    
    void dfs(int pos, vector<int>& candidates, int target, int sum, vector<int>& p, vector<vector<int>>& subsets)
    {
        if(sum > target)
            return;
        if(sum == target)
        {
            subsets.push_back(p);
            return;
        }
        if(pos == candidates.size() )
        {
           return;
        }
        p.push_back(candidates[pos]);
        // Choose current element till you want
        dfs(pos, candidates, target, sum + candidates[pos], p, subsets);
        p.pop_back(); // Restore previous position.
        
        // Don't choose current element and go to next
        dfs(pos + 1, candidates, target, sum, p, subsets );
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        int sum = 0;
        int pos = 0;
        vector<int> p;
        dfs(pos, candidates, target, sum, p ,v);
        return v;
    }
};
