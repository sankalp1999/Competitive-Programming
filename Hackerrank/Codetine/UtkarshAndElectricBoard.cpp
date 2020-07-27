/ MY solution for the questions

/*
Utkarsh likes to make circuits.
The physics lab assistant showed him a special kind of wire, its resistance gets multiplied instead on getting added when you attach it in series with another similar wire.
Then the assistant hammered some nails on a wooden board and joined some of them with these special wires.
He then asked Utkarsh to find single line connection between 2 given nails with minimum hindrance to the flow of electricity (the path which offers minimum resistance).
If there is no connection between the given two nails, return -1.
Help Utkarsh find it.

NOTE : Wires are put up in such a manner that two/more paths(if present) between 2 nails will never have the same hindrance, resistance value can be non integral

Input Format
*/



#include <bits/stdc++.h>
using namespace std;

// long long int min_num = 2147483600;
long double res = std::numeric_limits<long double>::max();
int flag = 0;
#define ll long long int 
int start;


typedef pair<long long int,long double> pii;

void dfs(int node, int dest, vector<vector<pii>>& adj, vector<bool>& visited,  long double cost)
{

    if(node == dest)
    {
        flag = 1;
        res = min(res, cost);
        return;
    }
    
    visited[node] = true;

    for(pii child : adj[node])
    {
        if(!visited[child.first])
        {
            dfs(child.first, dest, adj,visited, cost * child.second);
        }

    }
    visited[node] = false;
    
}

int main() {
    
    int n;
    cin >> n; 
    int m; 
    cin >> m;

    vector<vector<pii>> adj(n + 1,vector<pii>());
  
    while(m--)
    {
        int a, b;
        long double c;
        cin >> a >> b >> c;
        adj[a].push_back({b,c});    
    }
    flag = 0;
    int source, dest;
    cin >> source >> dest;
    start = source;
    vector<bool> visited(n + 1, false);

    dfs(source, dest, adj,  visited, 1);
    
    if(flag)
        cout << res << endl;
    else
        cout << -1 << endl;
    return 0;
}
