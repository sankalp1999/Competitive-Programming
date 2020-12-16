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

typedef pair<lli, lli> pii;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<pair<lli, lli>> v;
   map<pair<int, int>,int> m;




   int q = n;
   while (q--)
   {
       lli a, b;
       cin >> a >> b;
       v.push_back({a, b});
       m[v.back()]++;
    }
       unordered_map<int, int> m1;
       unordered_map<int, int> m2;
       for (int i = 0; i < n; i++)
       {
           m1[v[i].ff]++;
           m2[v[i].ss]++;
        }
       lli res = 0;
       for(auto it : m1)
       {
           lli val = it.second;
           res += val * (val - 1) / 2LL;
       }
         for(auto it : m2)
       {
               lli val = it.second;
               res += val * (val - 1) / 2LL;
       }

        // When we will come second time
        // we will double count these numbers
        // We have counted each 01 in the x axis
        // but again, we will count them in y axis
        // for each one since both the numbers are same.
        // and we will do it each time we get that number
        // So subtract Duplicate Choose 2 pairing
        // 0 1
        // 0 x
        // 0 1
        // 0 1

       for(auto it : m)
       {
           lli val = it.second;
           res -= val * ( val -  1)/2;
       }
       cout << res << endl;
}