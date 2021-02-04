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
   vector<int> font(n,0);
   vector<int> cost(n,0);
   for (int i = 0; i < n; i++)
   {
       cin >> font[i];
   }
   for (int i = 0; i < n; i++)
   {
       cin >> cost[i];
   }

   lli max_cost = INT_MAX;
// fix j and choose minimum costs from both the sides.
// You don't really need to check every pair.
// By fixing j, we are making i and k independent.
// So just minimum from both the sides are required.  
// O(n ^ 2)
   
   for (int i = 0; i < n ; i++)
   {
       lli sum = INT_MAX;

       for (int j = i - 1; j >= 0; j--)
       {
           if(font[i] > font[j])
           {
               sum = min(sum, (long long)cost[j]);
           }
       }

       lli sum2 = INT_MAX;
       for (int j = i + 1; j < n; j++)
       {
           if(font[i] < font[j])
           {
            sum2 = min(sum2, (long long)cost[j]);
           }
       }
      
       
       max_cost = min(max_cost, sum + sum2 + cost[i]);
   }
   if(max_cost == INT_MAX)max_cost = -1;
   cout << max_cost << endl;
}