#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n;i++){

        int p, q;
        cin >> p >> q;
        v.push_back({p, q});
    }
    int visited[101] = {0};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = v[i].first; j <= v[i].second; j++)
        {
            visited[j] = 1;
        }
        if (v[i].first == v[i].second)
            visited[v[i].first] = 1;
    }
    vector<int> left;
    for (int i = 1; i <= m; i++)
    {

        if (visited[i] == 0)
        {
            
            left.push_back(i);
        }
    }
    cout << left.size() << endl;
    for (int i = 0; i < left.size(); i++)
    {
        cout << left[i] << " ";
    }
    return 0;
}