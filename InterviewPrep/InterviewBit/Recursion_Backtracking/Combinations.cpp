
/*
Time complexity
Since we are k == n
worst case scenario, we are generating all combinations.
O(C(n,k)) complexity
*/


void dfs(int pos, vector<vector<int>>& subsets, vector<int>& p, int k, int n)
{
    if(p.size() == k) // base case
    {
        subsets.push_back(p);
        return;
    }
    for(int i = pos; i <= n; i++)
    {
        p.push_back(i);          
        dfs(i+1,subsets,p,k, n); // Move one step forward
        p.pop_back();            // later backtrack to previous state
    }
}

vector<vector<int> > Solution::combine(int n, int k) {
    
    vector<vector<int>> subsets;
    vector<int> p;
    int pos = 1;
    dfs(pos, subsets, p, k, n);
    return subsets;
}
