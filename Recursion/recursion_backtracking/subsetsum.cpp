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
   int n, m;
//    cin >> n >> m;
   n = 4;
   m = 2; 
   bool dp[n + 1][m + 1];
   dp[0][0] = true; // empty subset
   int arr[n+1] = {-1 , 2, 5, 3, 4};
   for (int i = 2; i <= m; i++)
   {
       dp[0][i] = 0;
   }
       for (int i = 1; i <= n; i++)
       {
           for (int j = 0; j <= m; j++)
           {
               if(j < arr[i])
                   dp[i][j] = dp[i - 1][j]; // copy the above till since above is valid till j
               else
               {    
                   int need = j - arr[i];
                   if( (dp[i-1][j] == 1 )|| (dp[i-1][need] == 1) )
                   {
                       dp[i][j] = true;
                   }
                   else
                   {
                       dp[i][j] = false;
                   }
               }
                      }
       }
       bool ans = dp[n][m];
      if(ans == 1)
          cout << "YES" << endl;
      else
          cout << "NO" << endl;

    //    cout << ans << endl;
}