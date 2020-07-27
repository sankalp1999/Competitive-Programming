#include <bits/stdc++.h>
using namespace std;

long long int lcm(int a, int b)
{
    return (a*b)/__gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++)cin >> a[i];
        cout << a[0] << " ";
        for(int i = 0; i < n - 1; i++)
        {
            cout << lcm(a[i],a[i+1]) << " ";
        }
        cout << a.back() << endl;
    }
    return 0;
}
