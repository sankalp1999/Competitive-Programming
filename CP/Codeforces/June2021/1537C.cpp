    #include<bits/stdc++.h>
    #define rep(i,n) for (int i = 0; i < n; i++)
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
    int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        lli n;
        cin >> n;
        vector<lli> v(n);
        
        rep(i, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int pos = 0;
        lli ele = -1;
        lli min_diff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if(v[i] - v[i-1] < min_diff)
            {
                min_diff = v[i] - v[i - 1];
                pos = i ;
                ele = v[i - 1];
            }
        }
        vector<lli> res;
        res.pb(v[pos - 1]);
        for (int i = pos + 1; i < n; i++)
        {
            res.pb(v[i]);
        }
        for (int i = 0; i < pos - 1; i++)
        {
            res.pb(v[i]);
        }
        res.pb(v[pos]);
        rep(i, n)
        {
            cout << res[i] << " ";
            }
        cout << endl;
    }
    }