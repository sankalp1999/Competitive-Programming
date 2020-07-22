/*
This question is another small variation.
Here, we have to select subets of size k and the numbers we can 
choose are  digits from 1 to 9.
So, we have to track sum and path size.
*/

class Solution {
public:
    
    void dfs(int pos, int sum, int n, int k, vector<vector<int>>& subsets, vector<int>& p)
    {
        if(sum > n)return;
        
        if(sum == n && p.size() == k )
        {
            subsets.push_back(p);
            return;
        }
        for(int i = pos; i <= 9; i++)
        {
            p.push_back(i);
            dfs(i+1,sum+i,n,k,subsets,p);
            p.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> subsets;
        vector<int> p;
        
        int pos = 1;
        int sum = 0;
        dfs(pos, sum, n, k, subsets, p);
        return subsets;
    }
};
