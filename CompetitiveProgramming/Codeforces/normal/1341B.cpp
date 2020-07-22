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
      int n, k;
      cin >> n >> k;
      vector<int> v(n);
      for (int i = 0; i < n; ++i)
      {
         cin >> v[i];
      }
      
      int iterations = n - k + 1;
      int pos = 0;
      int peaks = 0;
      int l = 0;
      int r = l + k - 1;
      for (int i = 1; i < k; i++)
      {
         if (v[i] > v[i-1] && v[i] > v[i + 1])
         {
            if( i != l && i != r)
               peaks++;
         }
      }
      iterations--;
      int ans_l = 0;
      int maxpeaks = peaks;
      while (iterations--)
      {
         // cout << "l : " << l+1 << " r:" << r+1 << endl;
         l++;
         // cout << " l :" << l << endl;
         if (v[l] > v[l - 1] && v[l] > v[l + 1])
         {
            peaks--;
         }

         if(v[r] > v[r-1] && v[r] > v[r + 1])
         {
            peaks++;
         }
         r++;
         if (peaks > maxpeaks)
         {
            maxpeaks = peaks;
            // cout << " L value : " << l + 1 << " " << endl;
            ans_l = l;
         }
      }

      cout << maxpeaks + 1 << " " << ans_l + 1 << endl;
   }
   }