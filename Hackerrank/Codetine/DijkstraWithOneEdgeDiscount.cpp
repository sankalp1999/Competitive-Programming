#include <bits/stdc++.h>
using namespace std;
typedef pair<long long int,long long int> pii;

#define ll long long int 

// Run dijkstra from 1 to n
// Run dijkstra from n to 1
// Consider each edge cost from both the ends + cost/2
// We reverse the graph since it is a directed graph.


vector<long long int> dijkstra(int source,vector<long long int>& dist, vector<vector<pii>>& adj, int n)
{

    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0, source}); // first,second = {distance, vertex}
    dist[source] = 0;
    int flag = 0;
    while(!pq.empty())
    {
        ll curr_distance = pq.top().first;
        ll curr = pq.top().second;
        pq.pop();
        // cout << curr << endl;
        for( pii child : adj[curr])
        {
            // cout << child.first << " ";
            if(child.second + curr_distance < dist[child.first] )
            {
             
                dist[child.first] = child.second + curr_distance;
                pq.push({ dist[child.first], child.first});
            }

        }

    }
    // cout << dist[n] << endl;
    return dist;
}

int main() {
    int n;
    cin >> n; 
    int m; 
    cin >> m;

    vector<vector<pii>> adj(n + 1,vector<pii>());
    vector<vector<pii>> adj2(n + 1,vector<pii>());
    vector<pair<pair<int,int>,int>> edges;
    // vector<int> nodes;
    int p = m;
    int indexcount[n + 1] = {0};
    while(p--)
    {
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});
        adj2[b].push_back({a,c});
        edges.push_back({{a,b},c});
        
    }
  

    vector<long long int> dist(n + 1, 10000000);

    vector<long long int> dist_source = dijkstra(1,  dist,  adj, n);

    vector<long long int> dist_rev(n + 1, 10000000);
 
    vector<long long int> dist2 = dijkstra(n, dist_rev,  adj2, n);
    
    long long int min_cost = dist_source[n];
    for(int i = 0; i < edges.size(); i++)
    {
        auto it = edges[i];
        long long int u = it.first.first;
        long long int v = it.first.second;
        long long int costOf = it.second;
        
        long long int currentCost = dist_source[u] + costOf/2 + dist2[v];
        min_cost = min(min_cost, currentCost);
    }
    cout << min_cost << endl;
    return 0;
}
