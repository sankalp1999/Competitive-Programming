#include <iostream>
#include <set>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        int n = i;
        set<int> s;
        while (n)
        {
            s.insert(n % 10);
            n = n / 10;
        }
        if(s.size() == to_string(i).size())
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}