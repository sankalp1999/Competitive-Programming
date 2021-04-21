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
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
const double PI = 3.141592653589793238460;

using namespace std;


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<pair<int, int>> v;
   for (int i = 0; i < n; i++)
   {
       int x, h;
       cin >> x >> h;
       v.push_back({x, h});
   }
   int left = (int)-1e9; // Always fell the first tree to left.
   int count = 0;
   for (int i = 0; i < n ; i++)
   {
       if(v[i].first - v[i].second > left)
       {
           left = v[i].first;
           count++;
           continue;
       }
       left = v[i].first; // For next round, if dont cut right also
       if(i == n - 1 || v[i].first + v[i].second < v[i + 1].first)
       {
           count++;
           left = v[i].first + v[i].second;
       }
   }
   cout << count << endl;
}