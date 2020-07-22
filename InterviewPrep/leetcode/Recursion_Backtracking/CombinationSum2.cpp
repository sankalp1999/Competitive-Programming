class Solution {
public:
    
    void dfs(int pos, int sum, vector<int>& candidates, vector<vector<int>>& v, vector<int>& p, int target)
    {
        if(sum > target)return;
        if(sum == target)
        {
            v.push_back(p);
            return;
        }
    
        for(int i = pos; i < candidates.size(); i++)
        {    
            
            //i > pos means that we have processed i which is greater than pos.
            // Now, if current i is equal to previous state's i, then we need to avoid current state as it will lead to 
            // duplication. Hence we continue
            // to move into the next state and skip this state.
            
            
            if(i>pos && candidates[i] == candidates[i-1])continue; // If next number is same, we don't want to repeat when we backtrack. Cut off that branch.
            p.push_back(candidates[i]);
            dfs(i+1,sum+candidates[i],candidates,v,p, target); // time to move to next state
            p.pop_back(); // backtrack to previous state
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> p;
        sort(candidates.begin(), candidates.end());
        int pos = 0;
        int sum = 0;
        dfs(0, sum, candidates, v, p, target);
        return v;
    }
};
