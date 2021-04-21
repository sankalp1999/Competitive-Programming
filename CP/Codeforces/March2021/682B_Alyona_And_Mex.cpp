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
   int mex = 1;
   for (int i = 0; i < n; i++)
   {
       cin >> v[i];
    }
   sort(v.begin(), v.end());
   int dup = 0;
   int curr_mex = 0;
   // If we find a mex, then we just decrease 
   // some number which is greater in order 
   // to incresae our mex.
   for (int i = 0; i < n; i++)
   {
       if(mex <= v[i])
       {
        //    s.erase(s.begin());
        mex++;
       }
   }
   cout << mex << endl;
}