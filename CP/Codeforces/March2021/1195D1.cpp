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

vector<long long int> pow10;

lli solve(long long int num, lli n)
{

    // digit 0 can be at place 0 or 1
    // digit 1 can be at place 2 or 3 and so on.....
    lli store = 0;
    lli digit = 0;
    while (num)
    {
        // cout << "ENTering";
        lli r = num % 10;
        store = (store%mod) + (r * n * pow10[digit])%mod;
        store %= mod;
        store = store%mod + (r  * n * pow10[digit + 1])%mod;
        store %= mod;
        digit += 2;
        num = num / 10;
    }
    return store;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   lli n;
   cin >> n;
   vector<long long int> v(n);
   for (int i = 0; i < n; ++i)
   {
       cin >> v[i];
   }
   pow10.push_back(1);
   for (int i = 1; i <= 30; i++)
   {
       pow10.push_back((10 * pow10.back()%mod)%mod);
   }
       lli res = 0;
   for (int i = 0; i < n; i++)
   {

       (res += solve(v[i], n));
       res %= mod;

   }
   cout << res << endl;
}