#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it : v)
    {
        cin >> it;
    
    }
    sort(v.begin(), v.end());

    cout << min(v.back() - v[1], v[n - 2] - v[0]) << endl;
}