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
       lli n, k;
       cin >> n >> k;
       vector<lli> v(n*k + 1);
       for (int i = 1; i <= n * k; i++)
       {
           cin >> v[i];
       }
       lli sum = 0;
       reverse(v.begin(), v.end());

       int count = 0;
       lli i = n / 2;
       while (count < k && i < n*k)
       {
        //    cout << v[i] << " ";
           sum += v[i];
           i += (n / 2)  + 1;
           count++;
       }
       cout << sum << endl;
   }
}