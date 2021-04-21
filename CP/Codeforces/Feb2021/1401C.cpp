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
       int flag = 0;
       cin >> n;
       vector<int> v(n);
       vector<int> temp(n);
       int min_ele = INT_MAX;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           temp[i] = v[i];
           min_ele = min(min_ele, v[i]);
       }
       sort(temp.begin(), temp.end());
       for (int i = 0; i < n; i++)
       {
           if(temp[i] != v[i] && v[i] % min_ele > 0)
           {
               flag = 1;
           }
       }
       if(flag == 1)
       {
           cout << "NO" << endl;
       }
       else
       cout << "YES" << endl;
   }
}