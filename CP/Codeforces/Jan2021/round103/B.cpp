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
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       // If we increase only the first value
       // it's effect will come for all.

       // Also, v[i]/sum <= k/100
       vector<long long int> prefix(n);
       prefix[0] = v[0];
       for (int i = 1; i < n; i++)
       {
           prefix[i] = prefix[i - 1] + v[i ];
       }

       lli temp = 0;
       for (int i = n - 1; i > 0; i--)
       {
           if (100 * v[i] < k * (prefix[i - 1] + temp))
           {
               continue;
           }
           else
           {
               lli x = (100 * v[i] - k *( prefix[i-1] +temp) + k - 1 ) / k;
               temp += x;
           }
      }
      cout << temp << endl;
   }
}