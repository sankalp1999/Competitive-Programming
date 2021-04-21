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
   int t;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       vector<int> a(n);
       vector<int> b(n);
       vector<int> c(n);
       for (int i = 0; i < n; i++)
       {
           cin >> c[i];
       }
       for (int i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       for (int i = 0; i < n; i++)
       {
           cin >> b[i];
       }
      // A normal cycle is just 
      // C[i] - 1 + 2 + a[i] - b[i]

       vector<lli> diff(n, 0);
       for (int i = 0; i < n; i++)
       {
           diff[i ] = abs(a[i] - b[i]);
       }

       vector<lli> dp(n + 1, 0);
       int res = 0;
       for (int i = 1; i < n; i++)
       {
           if(a[i] == b[i])
           {
               dp[i] = max(dp[i], c[i] - 1 + diff[i] + 2); 
               // Only one choice which is only this cycle
           }
           else
           {
               dp[i] = c[i]  - 1 + 2 +  max( diff[i] , dp[i - 1] - diff[i]);
           }

           res = max(res, dp[i]);
       }
       cout << res << endl;
   }
}