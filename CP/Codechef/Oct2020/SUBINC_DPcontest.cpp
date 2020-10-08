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
      vector<int> v(n);
      for(int i = 0; i < n; i++)
      {
          cin >> v[i];
      }
      int dp[v.size()] = {1}; // It keeps the lenght of longest subarray till that position
      int count = 1;
      for(int i = 0; i < n - 1; i++)
      {
            if(v[i ] <= v[ i + 1])
            {
                count++;
            }
            else
            {
                dp[i] = count;
                count = 1;    
            }
      }
      dp[n - 1] = count;
      lli res = v.size();
      for(int i = 0; i < v.size(); i++)
      {
          lli val = dp[i];
        //   cout << val << " ";
          res += val * (val - 1) / 2;
      }
      cout << res << endl;
   }
   
}