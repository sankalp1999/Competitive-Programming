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
       int n, k;
       cin >> n >> k;
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
    //    sort(v.begin(), v.end());
       for (int i = 0; i < n; i++)
       {
           while(k > 0 && v[i] > 0)
           {
               v[i]--;
               k--;
               v[n - 1]++;
           }
       }
       for(int i : v)
       {
           cout << i << " ";
       }
       cout << endl;
   }
}