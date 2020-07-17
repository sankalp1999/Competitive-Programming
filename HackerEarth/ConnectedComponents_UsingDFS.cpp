#include <iostream>
#include <vector>
using namespace std;

int visited[10001];
vector<int> adj[10001];

void dfs(int u)
{
     visited[u] = 1;
     for(int child : adj[u]){
         if(!visited[child])
         dfs(child);
     }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            dfs(i);
            count++;
        }
    }
    cout << count << endl;

}
