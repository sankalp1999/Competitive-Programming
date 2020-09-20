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
       int n, m, x;
       cin >> n >> x >> m;
       vector<pair<int, int>> v;
       int visited[m] = {0};
       int max_l = x;
       int max_r = x;
       for (int i = 0; i < m; i++)
       {
           int a, b;
           cin >> a >> b;
           if(b < max_l || a > max_r)
           {

           }
           else
           {
               max_l = min(max_l, a);
               max_r = max(max_r, b);
           }
        }

        cout << max_r - max_l + 1 << endl;
   }
}