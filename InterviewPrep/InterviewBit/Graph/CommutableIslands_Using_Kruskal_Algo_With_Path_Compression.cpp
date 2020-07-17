/*Used path compression with disjoint set union
*/




struct edge
{
    int u;
    int v;
    int weight;
};

bool comp(edge a, edge b)
{
    return a.weight < b.weight;
}

int find(int a, int parent[])
{
    if(parent[a] == -1)return a;
    return parent[a]  = find(parent[a], parent);
}

void merge(int a, int b, int parent[])
{
    parent[a] = b;
}

int Solution::solve(int A, vector<vector<int> > &B) {
        
    int n = B.size();
    int parent[n + 1];
    for(int i = 1 ; i < n + 1; i++)
    {
        parent[i] = -1;
    }
    edge adj[B.size() + 1];
    for(int i = 0; i < B.size(); i++)
    {
        adj[i].u = B[i][0];
        adj[i].v = B[i][1];
        adj[i].weight = B[i][2];
    }
    sort(adj, adj + n, comp);
    long long int sum = 0;
    for(int i = 0; i < B.size() ;i++)
    {
        int a = find(adj[i].u, parent); // Find the parent of their component
        int b = find(adj[i].v, parent);
        if(a != b) // parents lie in different sets or components.
        {
            merge(a, b, parent); // Now, it is included in the tree
            sum += adj[i].weight; // Add the weight
        }
    }
    return sum;
}
