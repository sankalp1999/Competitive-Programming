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
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
   }

   unordered_map<lli, lli> m;

   lli rs = 0;
   lli count = 0;
   m[0] = 1;
   for (int i = 0; i < n; i++)
   {
       rs += v[i];
       if (m.find(rs) != m.end())
       {
           count++;
           m.clear();
           m[0] += 1;
           rs = v[i];
       }

       m[rs] += 1;
   }
   
   cout << count   << endl;
}
