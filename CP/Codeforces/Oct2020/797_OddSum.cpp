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
   lli sum = 0;
   // Take all the positive numbers.
   // Take the min pos or min neg number 
   // to get odd sum if already not.
   int min_odd= INT_MAX;
   int min_odd_pos = INT_MAX;
   // Note only odd numbers can change parity

   for (int i = 0; i < v.size(); i++)
   {
       if(v[i] > 0)
       {
           sum += v[i];
           if(v[i] & 1)
           {
               min_odd_pos = min(min_odd_pos, v[i]);
           }
       }
       else
       {   
           if(v[i] & 1)
           min_odd = min(abs(v[i]), min_odd);
       }
   }

   if(sum % 2 == 1)
   {
       cout << sum << endl;
       return 0;
   }
   
   cout << sum - (min(min_odd, min_odd_pos)) << endl;
}