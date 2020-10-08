#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 998244353
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
   int n, k;
   cin >> n >> k;

    // {li, ri} can be equal
    // Select k disjoint segments of kth largest elements
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {  
        cin >> v[i];
   }
   vector<int> temp(v);
   sort(temp.begin(), temp.end(), greater<int>());
   // Select k largest numbers.
   // Calculate the distance between them and 
   // multiply since on doing some hand calculation/
   // those are the totatl ways to select subsegents
   unordered_set<int> s;
   lli sum = 0;
   for (int i = 0; i < k; i++)
   {
       s.insert(temp[i]);
       sum += temp[i];
   }
   vector<long long int> res;
   for (int i = 0; i < n; i++)
   {
       if(s.find(v[i]) != s.end())
       {
           res.push_back(i + 1);
       }
   }
   lli ways = 1;
   for(int i = 0; i < res.size() - 1; i++)
   {
       lli temp = res[i + 1] - res[i];
       ways = ((ways % mod) * (temp % mod)) % mod;
   }
   cout << sum << " " << ways % mod << endl;
}