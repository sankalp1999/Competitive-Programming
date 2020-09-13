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
       vector<long long int> v(n);
       int flag = 0;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           if(v[i] == 0)
           {
               flag = 1;
           }
       }
       sort(v.begin(), v.end());
       lli sum =LLONG_MIN; 
       sum = max(sum,v[0] * v[1] * v[2] * v[3] * v[n - 1]);                 // first 4 last 1
       sum = max(sum, v[n - 1] * v[n - 2] * v[n - 3] * v[n - 4] * v[n - 5]); // first 0 last 5
       
    //    sum = max(sum, v[0] * v[1] * v[2] * v[3] * v[n - 1]);
       sum = max(sum, v[0] * v[1]  * v[n - 1] * v[n - 2] * v[n-3] ); // first 2 and last  3
       
    //    sum = max(sum, v[0] * v[1] * v[n - 1] * v[n - 2] * v[n - 3] );
    //    sum = max(sum, v[n - 1] * v[n - 2] * v[0] * v[1] * v[2]);
 
       cout << sum << endl;
   }
}