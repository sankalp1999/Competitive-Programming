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
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
   }
   unordered_map<int, vector<int>> m;
   for (int i = 0; i < v.size(); i++)
   {
       m[v[i]].push_back(i);
   }

   int count = 0;
   vector<pair<int, int>> res;
   for (auto v : m)
   {
       vector<int> temp = v.second;
       
       if(temp.size() == 1)
       {
           count++;
           res.push_back({v.first, 0});
           continue;
       }
       
       int diff = temp[1] - temp[0];
       int flag = 0;
       for (int i = 1; i < temp.size(); i++)
       {
           if(abs(temp[i] - temp[i - 1]) == diff)
           {
               continue;
           }
           else
           {
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           res.push_back({v.first, diff});
       }
   }
   cout << res.size() << endl;
   sort(res.begin(), res.end());
   for (auto it : res)
   {
       cout << it.first << " " << it.second << endl;
   }
}