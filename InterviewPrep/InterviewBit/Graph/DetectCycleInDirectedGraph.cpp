
/*
https://www.youtube.com/watch?v=Zuwp40mT66c

We use a inTheCall array to detect if we are visiting some node 
in the same component in that dfs call....
Visited array stores the info once but the inTheCall array saves information
for that time only. If some value is already visited and we find that it is 
true in the inTheCall array, then that means we are visiting it again.

GFG practice has this weird vector<int> array format.
*/


bool dfs(int node, vector<int> adj[], vector<bool>& visited, vector<bool>& inTheCall)
{
    visited[node] = true;
    inTheCall[node] = true;
    for(int j = 0; j < adj[node].size(); j++)
    {
        if(!visited[ adj[node][j] ] && dfs(adj[node][j], adj, visited, inTheCall))
        {
            return true;
        }
        else if(inTheCall[adj[node][j]])
        {
            return true; // cycle detected since we again detected the same node.
        }
    }
    inTheCall[node] = false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    vector<bool>inTheCall(V, false);
    for(int i = 0; i < V; i++)
    {
        if(!visited[i])
        {
            if(dfs(i, adj, visited, inTheCall))
            {
                return true;
            }
        }
    }
    return false;
}
