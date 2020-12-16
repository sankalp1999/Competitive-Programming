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
       vector<int> v;
       vector<int> where(n + 1);
       unordered_map<int, int> m;
       
       int flag = 0;
       for (int i = 0; i < n; i++)
       {
           int temp;
           cin >> temp;
           v.push_back(temp);
           m[temp]++;
           where[temp] = i + 1;
       }
       sort(v.begin(), v.end());
       for (int i = 0; i < n ; i++)
       {
           if(m[v[i]] == 1)
           {
               cout << where[v[i]] << endl;
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           cout << -1 << endl;
       }
   }
}