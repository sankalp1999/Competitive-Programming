#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


struct edge
{
    int u;
    int v;
    int weight;
};

bool comp(edge a, edge b)
{
    if(a.weight < b.weight)return true;
    else return false;
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

int solve(int A, vector<vector<int> > &B) {
        
    int n = B.size();
    int parent[n + 1];
    for(int i = 1 ; i <= n; i++)
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
        int a = find(adj[i].u, parent);
        int b = find(adj[i].v, parent);
        if(a != b) // parents lie in different sets or components.
        {
            sum += adj[i].weight;
            merge(a, b, parent);
        }

    }
    return sum;
}

int main()
{
    vector<vector<int>> v;
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v.push_back(vector<int> {a, b, w});
    }
    int sum = solve(n, v);
    cout << sum << endl;
}


