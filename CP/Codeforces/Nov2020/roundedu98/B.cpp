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
       lli n;
       cin >> n;
       vector<lli> v(n);
       lli  ele = 1e9 + 1;
       lli max_ele = -1;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           ele = min(v[i], ele);
           max_ele = max(v[i], max_ele);
       }

       lli bank = ele;
       
       lli extra = 0;
       int flag = 0; // for first occurnce
       
       for (int i = 0; i < n; i++)
       {
           if(v[i] != ele)
           {
               extra += max_ele - v[i] ; // required moneh
           }
           else
           {
               if(flag == 0)
               {
                   flag = 1; // skip
                   continue;
               }
               else
               {
                   extra += max_ele - v[i];
               }
             }
       }
        if(extra > bank)
        {
            cout << extra - bank << endl;
        }
        else if(extra == bank)
        {
            cout << 0 << endl;
        }
        else
        {   
            cout << max(0LL, (n - 1LL) - (bank - extra) ) << endl;
        }
      }
}