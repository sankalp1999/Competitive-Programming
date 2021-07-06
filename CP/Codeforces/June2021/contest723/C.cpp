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


// int solve(vector<int>& nums, vector<int>& dp, int idx, int h)
// {
//     if(idx >= nums.size()){
//         return 0;
//     }

//     if(h < 0)
//         return 0;
//     if (dp[idx] != -1)
//         return dp[idx];
  

//     int res = 0;
//       res = max(res, solve(nums, dp, idx + 1, h)) ;
//     res = 1 + solve(nums, dp, idx + 1, h + nums[idx]);
    


//     return dp[idx] = res;
// }

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

       int n;
       cin >> n;
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       int idx = 0;
       priority_queue<int,vector<int>,greater<int>> pq;
       long long int running = 0;
       int count = 0;
       for(int i = 0; i < n; i++)
       {
           running += v[i];
           count++;
           if(v[i]<0)
           {
               pq.push(v[i]);
           }
           // Keep removing the minimum value in the prefix i.e the greatest negative value 
           // which is causing our sum to be 0.
        //    while(running < 0)
        //    {
               while(!pq.empty() && running < 0)
               {
                   int top = pq.top();
                   pq.pop();
                   running = running - top;
                   count--;
               }
        //    }
           
       }
       cout << count << endl;

}


