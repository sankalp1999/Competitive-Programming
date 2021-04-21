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
      string s;
      cin >> s;
      int lm, rm;
      lm = s.size()  - 1;
      rm = 0;
      int flag = 0;
      for(int i = 0; i < n; i++)
      {
          if(s[i] == '1')
          {
              lm = i;
              flag = 1;
              break;
          }
      }
      for(int j = n - 1; j >= 0; j--)
      {
          if(s[j] == '1')
          {
              rm = j;
              flag =1 ;
              break;
          }
      }
      if(flag ==  0)
      {
          cout << n << endl;
      }
      else
      {
          cout << 2 * max(rm - 0 + 1, n - lm) << endl;
      }
      
      
      
   }
   
}