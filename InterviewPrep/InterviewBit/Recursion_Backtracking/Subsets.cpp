void dfs(int pos, vector<int>& A, vector<vector<int>>& subsets, vector<int>& p)
{
    subsets.push_back(p);
    for(int i = pos; i < A.size(); i++)
    {
        p.push_back(A[i]);
        dfs(i+1, A, subsets, p);
        p.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    vector<vector<int>> subsets;
    sort(A.begin(), A.end());
    vector<int> p;
    int pos = 0;
    dfs(pos, A, subsets, p);
    return subsets;
}
