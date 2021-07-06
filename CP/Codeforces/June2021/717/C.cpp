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

vector<int> dp(200 + 1, -1);
int tot;
int count1;
int solve(vector<int> &v, int idx, int sum)
{
    if(idx >= v.size())
    {
        // cout << sum << endl;
        if (sum == tot - sum)
        {
            count1++;
        }
        return 0;
    }
    // if(dp[idx]!=-1)
        // return dp[idx];

    int res = 0;
    res = solve(v, idx + 1, sum);
    res = max(res, v[idx] + solve(v, idx + 1,sum + v[idx]));
    return res;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   count1 = 0;
   vector<int> v(n);
   //    dp.resize(n + 1);
   tot = 0;
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
       tot += v[i];
   }
   int sum = 0;
   solve(v, 0, sum);
   cout << count1/2 << endl;
}