/*
The idea is to run dfs from any node preferably the root node. Find 
the farthest node. Now, it can be proved by contradiction that this 
node is one of the ends of a diameter of the graph.
Now, we run another dfs from this and find the farthest node from this.
The farthest node from our candidate will be the other end of the diamter.
Thus, this distance is the diameter of the graph.

Check this awesome video by CodeNCode https://www.youtube.com/watch?v=FQLPNQppBNs&list=PL2q4fbVm1Ik6DCzm9XZJbNwyHtHGclcEh&index=14
*/

// Normal dfs with level
void dfs(vector<vector<int>>& A, int root, vector<bool>& visited,int level, pair<int,int>& farthest)
{
    visited[root]=true;
    if(level > farthest.second) // Find the farthest node till now
    {
        farthest.second = level;
        farthest.first = root;
    }
    for(int child : A[root])
    {
        if(!visited[child])
        {
            dfs(A,child,visited,level+1,farthest);
        }
    }
}

int Solution::solve(vector<int> &A) {
    vector<vector<int>> adj(A.size(), vector<int>());
    int root;
    if(A.size() == 1)return 0;
    // Build Graph
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == -1)
        {
            root = i;
            continue;
        }
        adj[A[i]].push_back(i);
        adj[i].push_back(A[i]);
    }
    int level = 0;
    vector<bool> visited(A.size(),false);
    pair<int,int> farthest;
    farthest.first = 0;
    farthest.second =INT_MIN;
    
    dfs(adj, root, visited, 0, farthest);

    root = farthest.first;
    int max_dist = farthest.second;
    
    farthest.first = 0;
    farthest.second = INT_MIN;
    
    //2nd DFS
    vector<bool> visited2(A.size(),false);
    dfs(adj, root, visited2, 0, farthest);

    return farthest.second;
}
