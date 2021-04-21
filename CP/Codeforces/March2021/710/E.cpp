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
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           
       }
       vector<int> minimal(n, 0);
       vector<int> maximal(n, 0);

       set<int> minset;
       set<int> maxset;
       for (int i = 1; i <= n; i++)
       {
           minset.insert(i);
           maxset.insert(i);
       }

      minimal[0] = maximal[0] = v[0];
      minset.erase(v[0]);
      maxset.erase(v[0]);
      for (int i = 1; i < n; i++)
      {
          if (v[i] != v[i - 1])
          {
              minimal[i] = maximal[i] = v[i];
              minset.erase(v[i]);
              maxset.erase(v[i]);
          }
       }
       vector<int> maxele;
       for (int i = 0; i < n; i++)
       {
           if(minimal[i] == 0)
           {
               minimal[i] = *(minset.begin());
               minset.erase(*minset.begin());
               maxele.push_back(minimal[i]);
           }
       }
       for(int i : minimal)
       {
           cout << i << " ";
       }
       cout << endl;
       int __is = maxele.size() - 1;
       for (int i : maximal)
       {
           
           if(i == 0)
           {
               cout << maximal[__is--] << " ";
                      }
           else
               cout << i << " ";
       }
       cout << endl;
      }
}