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

const int maxn = 1e5 + 1;
int visited[maxn]; // by default initialized to zero
vector<int> v(maxn);
int cons = 0;
int leaf = 0;
void dfs(vector<vector<int>> &adj, int source, int cat, int m, int prev)
{
    visited[source] = 1;
    if(v[source])
    {
        cat++;
    }
    else
    {
        cat = 0;
    }
    if(cat > m)
    {
        return;
    }

    // to check whether no the first node is not the leaf.
    if(adj[source].size() == 1 && prev != -1) 
    {
        leaf++;
    }
    for (int child : adj[source])
    {
        if (!visited[child])
        {
            dfs(adj, child, cat, m, child);
        }
    }

}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   t = 1;
   while (t--)
   {
       int n, m;
       cin >> n >> m;
  
       for (int i = 1; i <= n; i++)
       {
           cin >> v[i];
       }
       vector<vector<int>> adj(n + 1, vector<int>());
       int vertices = n;
       n--;

       while (n--)
       {
           int a, b;
           cin >> a >> b;
           adj[a].push_back(b);
           adj[b].push_back(a);
        }
       int source = 1;
       int cat = 0;

       int prev = -1;
       dfs(adj, 1, cat, m, prev);
       cout << leaf << endl;
   }
}