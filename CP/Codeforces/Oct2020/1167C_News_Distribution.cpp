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
const int max1 = 5e5 + 1;
int visited[max1];
int count = 0;
void dfs(int source, vector<vector<int>> &adj)
{

    visited[source] = 1;
    count++;
    for (child : adj[source])
    {
        if(!visited[child])
        {
            dfs(child, adj);
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, m;
   cin >> n >> m;
   vector<vector<int>> adj(n + 1, vector<int>());
   for (int i = 1; i <= m; i++)
   {
       int k;
       cin >> k;
       int last;
       
       for (int j = 0; j < k; j++)
       {
           int temp;
           cin >> temp;
           if(j == 0){
               last = temp;
           }
           else
           {
               adj[last].push_back(temp);
           }
           
       }
   }

   memset(visited, 0, sizeof(visited));
   vector<int> res(n + 1, 0)
   for (int i = 1; i <= n;i++)
   {
       count = 0;
       if(!visited[i])
       {
           dfs(i, adj);
       }
       
   }

       return 0;
}