#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    set<int > s;
    int n;
    cin >> n;
    s.insert(0);
    s.insert(1);
    for(int i = 1; i*i <= n; i++)
    {
        s.insert(i);
        s.insert(n/i);
    }
    cout << s.size() << endl;
    for(auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    }
}