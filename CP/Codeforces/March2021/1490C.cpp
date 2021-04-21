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
   unordered_set<lli> cubes;
   for (lli i = 1; i <= (lli)1e4; i++)
   {
       cubes.insert(i * i * i);
   }

   while(t--)
   {
       lli n;
       cin >> n;
       int flag = 0;
       for (lli a = 1; a <= cbrt(n); a++)
       {
           if(cubes.find(n - a * a * a) != cubes.end())
           {
               cout << "YES" << endl;
               flag = 1;
               break;
           }
       }
       if(!flag )
       cout << "NO" << endl;
   }
}