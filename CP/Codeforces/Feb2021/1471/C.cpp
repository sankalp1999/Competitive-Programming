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
       int n, m;
       cin >> n >> m;
       vector<int> v(n);
       vector<int> v2(m);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       for (int i = 0; i < m; i++)
       {
           cin >> v2[i];
       }
       sort(v.begin(), v.end(), greater<int>());
       long long int sum = 0;
       int k = 0;
       for (int i = 0; i < n; i++)
       {
           if(k <= v[i] - 1)
           sum += v2[k++];
           else
           {
               sum += v2[v[i] - 1];
           }
        }
        cout << sum << endl;
   }
}