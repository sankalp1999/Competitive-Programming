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

int dp[2001][2001];

int solve(vector<int>& nums,  int idx, int k, int& flag, lli h)
{
    if(idx >= nums.size()){
        return 0;
    }



    if (dp[idx][k] != -1)
        return dp[idx][k];
  

    int res = 0;
    
    res = solve(nums,  idx + 1, k, flag, h) ;

    if(h + nums[idx] >= 0)
    res = max(res, nums[idx] + solve(nums, idx + 1, k + 1, flag, h + nums[idx]));
    
    

    if(res>=0){
        flag = max(flag, k);
    }

    return dp[idx][k] = res;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
//    cin >> t;
   t = 1;
   while (t--)
   {
       int n;
       cin >> n;
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       int count = 0;
       
       memset(dp, -1, sizeof dp);
       int idx = 0;
       int flag = 0;
       solve(v, idx, 0, flag,0);
       cout << flag << endl;
   }
}