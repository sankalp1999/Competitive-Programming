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
       int n;
       cin >> n;
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       unordered_map<lli, lli> m;
       lli count = 0;
       // Group according to the msb
       for (int i = 0; i < n; i++)
       {
           lli expo = ceil(log2(v[i]));
           if(floor(log2(v[i])) == expo)
           {
               expo++;
           }
           count += m[expo];
           
           m[expo ]++;
           
       }
       cout << count << endl;
   }
}