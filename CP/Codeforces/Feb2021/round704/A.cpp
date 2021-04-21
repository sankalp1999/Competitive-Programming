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
      lli p, a, b, c;
      cin >> p;
      lli arr[3];
      for(int i = 0 ; i < 3; i++)
      {
          cin >> arr[i];
      }
      lli res = 1e18 + 1;
      for(int i = 0; i < 3; i++)
      {
          if(p <= arr[i])
          {
              res = min(res, abs(p - arr[i]));
          }
          else
          {
              lli op =  ((p+arr[i] - 1)/arr[i]) * arr[i] - p;
              res = min(abs(op), res);
          }
      }
      cout << res << endl;
      

   }
   
}