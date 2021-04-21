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
       lli n;
       cin >> n;
       vector<lli> a(n + 1, 0), b(n + 1, 0);
       
       for (int i = 1; i <= n; i++)
       {
           cin >> a[i] >> b[i];
       }
       vector<lli> t(n + 1);
       for (int i = 1; i <= n; i++)
       {
           cin >> t[i];
       }
       lli tr = 0;
       lli curr_time = 0;
       for (int i = 1; i <= n; i++)
       {
           tr += a[i] - b[i - 1] + t[i];
           if(i == n)
               break;
           tr += (b[i] - a[i] + 1) / 2;
           
           if (tr < b[i])
           {
            //    arrival = arrival + wait;t
            tr += b[i] - tr;
           }
       }

       cout << tr << endl;
   }
}