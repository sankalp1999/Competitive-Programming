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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, p;
    cin >> n >> k >> p;
    vector<pair<int, int>> v;
    vector<int> values(n + 1);
    REP(i, n)
    {
        int temp;
        cin >> temp;
        v.push_back({temp, i + 1});
        values.pb(temp);
    }
    sort(v.begin(), v.end());
    int dp[n + 1] = {0}; // Store the max distance on the left which 
    // this frog can reach. Optimal strategy is for the frog
    // to pass to nearest frog
    // and then let the nearest frog pass the message 
    dp[v[0].ss] = v[0].ss;

    for (int i = 2; i <= n; i++)
    {
        if(v[i-2].ff + k >= v[i - 1].ff) // same left farthest
        {
            dp[v[i-1].ss] = dp[v[i-2].ss];
        }
        else //
        {
            dp[v[i-1].ss] = v[i-1].ss;
        }
    }
    
    while(p--)
    {
            int a, b;
            cin >> a >> b;
            int geta = dp[a];
            int getb = dp[b];
            if (geta == getb)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
    }

    // dp[i] ith frog
    // dp[i] value indicates the farthest frog the left that can be reached
}

/*
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   t = 1;
   while (t--)
   {
       int n, k, p;
       cin >> n >> k >> p;
       vector<pair<int, int>> v;
       REP(i, n)
       {
           int temp;
           cin >> temp;
           v.push_back({temp, i + 1});
       }
       sort(v.begin(), v.end());
       int s = 0;
       unordered_map<int, int> m;
       m[v[0].ss] = s;
       for (int i = 1; i < n; i++)
       {
           if(v[i - 1].ff + k >= v[i].ff)
           {
               m[v[i].ss] = s;
           }
           else
           {
               s++;
               m[v[i].ss] = s;
           }
        }
        while(p--)
        {
            int a, b;
            cin >> a >> b;
            int geta = m[a];
            int getb = m[b];
            if(geta == getb)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
   }
}
*/