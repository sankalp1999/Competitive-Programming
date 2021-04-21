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
      vector<lli> v(n);
      set<lli> s;
      s.clear();
      for(int i = 0; i < n; i++)
      {
          cin >> v[i];
          s.insert(v[i]);
      }

      int count = 0;
      int i = n - 1;
      vector<lli> res;
      while(i >= 0)
      {
          stack<lli> stacky;
          lli to_find;
          if(s.empty())cout << "YES" << endl;
        //   if(!s.empty())
          to_find = *(s.rbegin());
          
          while(v[i] != to_find && i >= 0)
          {
              
              s.erase(v[i]);
              stacky.push(v[i]); 
              i--;
          }
          stacky.push(v[i]);
          if(!s.empty())s.erase(v[i]);
          while(!stacky.empty())
          {
              lli ele = stacky.top();
              stacky.pop();
              res.push_back(ele);
          }
               i--;
      }
      for(lli i : res)
      {
          cout << i << " ";
      }
      cout << endl;

   }
   
}