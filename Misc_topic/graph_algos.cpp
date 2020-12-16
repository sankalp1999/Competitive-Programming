const int INF = 2147483647;
const int MAX = 5005;
int D[MAX], N; // Keeps minimum distance to each node
vector<pair<int,int>> E[MAX]; // Adjacency list
 
void dijkstra()
{
    for(int i = 1; i <= N; i++) D[i] = INF;
    D[1] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,1});
 
    while(!q.empty())
    {
        pair<int,int> p = q.top();
        q.pop();
 
        int u = p.second, dist = p.first;
        if(dist > D[u]) continue;
 
        for(pair<int,int> pr : E[u])
        {
            int v = pr.first;
            int next_dist = dist + pr.second;
 
            if(next_dist < D[v])
            {
                D[v] = next_dist;
                q.push({next_dist,v});
            }
        }
    }
}


-------------------------------------------------------------------------------------------------------
/* Topo sort using dfs. Explanation --> Go to CP-algorithms but it's based on exit time. By
 the time dfs is completed, all the nodes which are supposed to be visited are visited first and 
 then exiting node comes in the sequence.
 Just add the exiting node in a stack or (Vector with reverse)
 */

int n; // number of vertices
vector<vector<int>> adj; // adjacency list of graph
vector<bool> visited;
vector<int> ans;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    ans.push_back(v);
}

void topological_sort() {
    visited.assign(n, false);
    ans.clear();
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}



/* Kahn's algorithm 
Queue + indegree 
*/
 vector<int> kahn(int numCourses, vector<int>& indegree, vector<vector<int>>& v)
    {
        queue<int> q;
        vector<int> topo;
        for(int i = 0 ;i < indegree.size(); i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            for(int child : v[top])
            {
                indegree[child]--;
                if(indegree[child] == 0)
                    q.push(child);
            }
            topo.push_back(top);
        }
        // for(int i : topo)cout << i << " ";
        vector<int> p;
        if(topo.size() == numCourses)return topo;
        else return vector<int> {};
    }