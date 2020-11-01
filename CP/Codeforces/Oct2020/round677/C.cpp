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
           int flag = 0;

       int max_ele = 0;
       int max_pos = 0;

      // Find the max_ele possible with atleast one elemnt smaller
      // That one can become a piranha
      // Because in an array with unequal elements,
      // atleast one element is gonna be max.


       for (int i = 0; i < n; i++)
       {
           if(i + 1 < n && v[i] > v[i + 1] && v[i] > max_ele )
           {
               
               max_ele = max(max_ele, v[i]);
               max_pos = i;
               flag = 1;
           }
           if(i - 1 >= 0 && v[i] > v[i - 1] && v[i] > max_ele)
           {
               max_ele = max(max_ele, v[i]);
                max_pos = i;
               flag = 1;
           }
       }
       if(flag == 0)
       {
           cout << -1 << endl;
       }
       else
       {
           cout << max_pos + 1 << endl;
       }
      }
}