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
       vector<int> v(n, 0);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       int rem = 0;
       vector<lli> res;
       for (int i = n - 1; i >= 0; i--)
       {   
           if(v[i] > rem) 
           rem = rem + (v[i] - rem);
           if (rem > 0)
           {
                rem--;
                res.push_back(1);
                // cout << 1 << " ";
           }
           else
               res.push_back(0);
        //    cout << 0 << " ";
       }
       reverse(res.begin(), res.end());
       for (lli i : res)
       {
           cout << i << " ";
       }
       cout << endl;
      }
}