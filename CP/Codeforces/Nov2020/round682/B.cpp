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
      // DUplicate not allowed.
      // if all unique, then check next n - 1 numbers.
      // if they contain all numbers from n - 1 to 0
      // with 2 zeros
      int n;
      cin >> n;
      vector<int> v(n);
      unordered_set<int> s;
      int flag = 0;
      for (int i = 0; i < n; i++)
      {
          cin >> v[i];

          if(s.find(v[i]) == s.end() )
          s.insert(v[i]);

          else
          {
                flag = 1;
          }
      }
      if(flag == 1)
      {
          cout << "YES" << endl;
      }
      else
      {
          cout << "NO" << endl;
      }
   }
}