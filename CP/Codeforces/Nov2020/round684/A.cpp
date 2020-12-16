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
       lli n, c0, c1, h;
       cin >> n >> c0 >> c1 >> h;
       string s;
       cin >> s;

       lli ones, zeros;
       ones = zeros = 0;

       for (int i = 0; i < n; i++)
       {
          if(s[i] == '0')
          {
              zeros++;
          }
          else
          {
              ones++;
          }
       }
    //    if(h > c0 && h > c1)
    //    {
    //        cout << zeros * c0 + ones * c1 << endl;
    //    }
    //    else if(h == c0 && h == c1)
    //    {
    //        cout << n * h << endl;
    //    }
    //    else
       {
           lli res = min({zeros * c0 + ones * c1,h * ones + (n)*c0, h * zeros + n * c1});
           cout << res << endl;
       }
   }
}