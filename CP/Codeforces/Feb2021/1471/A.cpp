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
       lli n, x;
       cin >> n >> x;
       lli sum = 0;
       lli sum2 = 0;
       vector<long long int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           sum += v[i];
           sum2 += (v[i] + x - 1LL) / x;
       }
       cout << (sum + x - 1) / x << " " << sum2 << endl;
   }
}