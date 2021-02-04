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
       vector<pair<lli, lli>> v;
       vector<lli> newone;

       lli sum = 0;
       for (int i = 0; i < n; i++)
       {
           lli temp;
           cin >> temp;
           sum += temp;
           v.push_back({temp, 1});
       }

  
    for (int i = 0; i < (long long int)v.size(); i++)
    {
       if(v[i].first % x == 0)
       {

           lli q = v[i].first / x;

           sum += (q ) * v[i].second * x;

           v.push_back({q, x * v[i].second});
       }
       else
           break;
    }

    cout << sum << endl;
       
   }
}