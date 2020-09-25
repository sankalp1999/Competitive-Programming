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
       res.push_back(v[0]);
       // Pick all the peaks and valleys 
       for (int i = 1; i < n - 1; i++)
       {
           if(v[i-1] < v[i] && v[i] > v[i+1])
           {
               res.push_back(v[i]);
           }
           else if(v[i-1] > v[i] && v[i] < v[i+1])
           {
               res.push_back(v[i]);
           }
       }
       res.push_back(v.back());
       cout << res.size() << endl;
       for(int i : res)
       {
           cout << i << " ";
       }
       cout << endl;
   }
}