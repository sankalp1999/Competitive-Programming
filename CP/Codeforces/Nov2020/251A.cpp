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
   t = 1;
   while (t--)
   {
       lli n, d;
       cin >> n >> d;
       vector<lli> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       lli max_diff = v.back() - v.front();
    //    cout << max_diff << endl;
       if (max_diff <= d)
       {
           lli res = n * (n - 1);
           res = res * (n - 2);
           res = res / 6;
           cout << res << endl;
       }
       else
       {
           // Certainly bigger

           lli res = 0;
           for (int i = 0; i < n; i++)
           {
               int bound = v[i] + d;
               auto it = lower_bound(v.begin() + i, v.end(), bound);
               
               int pos = distance(v.begin(), it);
          
               
               if(pos == n)
               {
                   lli add = 0;
                   if (pos - i - 2 > 0)
                       add = pos - i - 2;

                   res += ((add) * (add + 1)) / 2;
                   continue;
               }
               int val = *it;
               if (bound == val)
               {
                //    cout << pos - i - 1 << endl;
                lli add = pos - i - 1;
                res += (add*(add + 1)) / 2;
               }
               else if(bound < val)
               {
                   lli add = 0;
                   if (pos - i - 2 > 0)
                       add = pos - i - 2;

                   res += ((add) * (add + 1)) / 2;
               }
           }
           cout << res << endl;
       }
    }
}