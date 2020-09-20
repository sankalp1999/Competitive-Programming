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

       vector<int> res;
      
       int visited[v.size()] = {0};
       int g = 0;
       for (int i = 0; i < v.size(); i++)
       {
           int max_gcd = 0;
           int pos = 0;
           for (int j = 0; j < v.size(); j++)
           {
               
               if(visited[j] == 1)
                   continue;
               int agcd = 0;
               agcd = __gcd( g, v[j]  );
               if (agcd > max_gcd)
               {
                   max_gcd = agcd;
                   pos = j;
               }
           }
           g = max_gcd;
           visited[pos] = 1;
           res.push_back(v[pos]);
       }
       for(int i : res)
       {
           cout << i << " ";
       }
       cout << endl;
   }
}