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
       lli n, k, x;
       cin >> n >> k >> x;
       vector<lli> v(n);
       vector<lli> need;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       lli count = 1;
       sort(v.begin(), v.end());
       for (lli i = 1; i < n; i++)
       {
           if(v[i] - v[i-1] > x)
           {
               lli temp = (v[i] - v[i - 1] + x - 1) / x;
               need.pb(temp - 1LL);
               count++;
           }
       }
       sort(need.begin(), need.end());
       for (int i = 0; i < need.size(); i++)
       {
           if(k >= need[i])
           {
               k -= need[i];
           }
           else
               break;
           count--;
       }
           cout << count << endl;
   }
   
}

