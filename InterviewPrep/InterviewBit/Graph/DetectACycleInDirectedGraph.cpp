int dfs(vector<vector<int>>& adj, vector<int>& visited, vector<int>& inCall, int vertex)
{
    visited[vertex] = 1;
    inCall[vertex]  = 1;
    
    for(int child : adj[vertex])
    {
        if(!visited[child] && dfs(adj, visited, inCall, child))  
        {
            return 1; // Found cycle
        }
        else if(inCall[child] == 1) // It is visited but still inCall[child] is true, that means it is a back edge.
        return 1;
    }
    inCall[vertex] = 0;
    return 0;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    
    vector<vector<int>> adj(A + 1);
    for(int i = 0; i < B.size(); i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
    }
    vector<int> visited(A + 1, 0);
    vector<int> inCall (A + 1, 0);
    
    for(int i = 1; i <= A; i++) // The graph may not be strongly connected.
    {
        if(!visited[i] &&  dfs(adj, visited, inCall, i))
        {
            return 1;
        }
    }
    return 0;
}
