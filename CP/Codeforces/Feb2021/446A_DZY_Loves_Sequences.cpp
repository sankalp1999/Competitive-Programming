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
   int n;
   cin >> n;
   int v[n ];

   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
   }
   int l[n ], r[n];
   l[0] = 1;
int res = 0;
   for (int i = 1; i < n; i++)
   {
       if(v[i ] > v[i - 1])
       {
           l[i] = l[i-1] + 1;
       }
       else
           l[i] = 1;
    
       res = max(res, l[i]);
   }
   r[n - 1] = 1;
   for (int i = n - 1; i >= 1; i--)
   {
       if(v[i - 1] < v[i])
       {
           r[i - 1] = r[i] + 1;
       }
       else
           r[i- 1] = 1;
        res = max(res, r[i]);
   }

   for (int i = 1; i < n - 1; i++)
   {
       if(v[i + 1] > v[i - 1] + 1 )
       {
           res = max(res, l[i - 1] + r[i + 1] + 1);
       }
       res = max(res, l[i - 1] + 1);
       res = max(res, r[i + 1] + 1);
   }
 

   cout << res << endl;
}