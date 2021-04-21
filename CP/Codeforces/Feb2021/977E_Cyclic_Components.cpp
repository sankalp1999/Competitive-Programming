#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;
int cycles;
int gadbad;
void dfs(int source, vector<vector<int>>& adj, int visited[])
{   
    visited[source] = 1;
    // If degree of each vertex is 2, then only cycle.
    if(adj[source].size() != 2)
    {
        gadbad = 1;
        // return;
    }
    for(auto node : adj[source])
    {
        if(!visited[node])
            dfs(node, adj,visited);
    }
}





int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m ;
   cin >> n >> m;
   vector<vector<int>> adj(n + 1, vector<int>());
   int edges = m;
   cycles = 0;
   while(edges--)
   {
       int src, dest;
       cin >> src >> dest;
       adj[src].push_back(dest);        
       adj[dest].push_back(src);
   }
       int visited[n + 1] = {0};
       for(int i = 1; i <= n; i++)
       {
           gadbad = 0;
           if(visited[i] == 0)
           {
            dfs(i,adj,visited);
            if(gadbad == 0)
                cycles++;
           }
       }
      cout << cycles << endl;

   
}