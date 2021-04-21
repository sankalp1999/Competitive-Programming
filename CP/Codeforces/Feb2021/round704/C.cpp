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
   int n, m;
   cin >> n >> m;
   string s1;
   string s2;
   cin >> s1 >> s2;
   unordered_map< char, vector<int> > my;
   for(int i = 0; i < s1.size(); i++)
   {
       my[s1[i]].push_back(i + 1);
   }
   int visited[26] = {0};
   vector<vector<int>> v;
   for(int i = 0; i < s2.size(); i++)
   {
       auto t = my[s2[i]];
       if(!visited[ s2[i] - 'a'] )
       {
           visited[s2[i] - 'a'] = 1;
           v.push_back(t);
       }
   }
   for(int i = 1; i < (int)v.size() - 1; i++)
   {
       int bs = v[i - 1].back();
       int 
   }
   
}