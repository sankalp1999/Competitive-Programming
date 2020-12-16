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
       int n;
       cin >> n;
       double res = 0;
       for (int i = 1; i <= n; i++)
       {
           res += 1 / (i * 1.0);
       }

       cout << fixed << setprecision(9) << res  <<endl; 
   }
}