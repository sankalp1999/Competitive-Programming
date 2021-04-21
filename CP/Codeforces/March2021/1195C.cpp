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

vector<int> arr1, arr2;
long long int dp[100001][2];
lli solve(int i, int flag)
{
    if(i >= arr1.size())
    {
        return 0;
    }
    if(dp[i][flag ] != -1)
        return dp[i][flag];
    lli ans = 0;
    if (flag == 0)
    {   
        // Either take and select from next row next time or don't take and stay in same
        // row since anyways not allowed to take from that row.
        ans = max(solve(i + 1, 0), solve(i + 1, 1) + arr1[i]);
    }
    else
        ans = max(solve(i + 1, 1), solve(i + 1, 0) + arr2[i]);

    return dp[i][flag] = ans;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   arr1.resize(n);
   arr2.resize(n);
   for (int i = 0; i < n; i++)
   {
       cin >> arr1[i];
   }
   for (int i = 0; i < n; i++)
   {
       cin >> arr2[i];
   }
   memset(dp, -1, sizeof(dp));
   int i, j, flag;
   i = j = flag = 0;
   cout << max(solve(0,0), solve(0,1)) << endl;
}
