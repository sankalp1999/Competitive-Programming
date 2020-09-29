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
   vector<pair<lli,lli>> v;
   lli n, d;
   cin >> n >> d;
   lli a, b;
   cin >> a >> b;
   int i = 1;
   while (n--)
   {
       lli x, y;
       cin >> x >> y;
       v.push_back({x * a + b * y,i++});
   }
   sort(v.begin(), v.end());
   vector<int> res;
   for (int i = 1; i <= v.size(); i++)
   {
       if(d-v[i - 1].first>=0)
       {
           d -= v[i - 1].first;
           res.push_back(v[i-1].second);
       }else
           break;
   }
   cout << res.size() << endl;
   for(int i : res)
   {
       cout << i << " ";
   }
   cout << endl;
}