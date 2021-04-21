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
   int n, a, b;
   cin >> n >> a >> b;
   if(b < a)
   {
       swap(a, b);
   }
   int res = 1;
   int x = 0;
   for (int i = 1; i <= a; i++)
   {
       int people = a / i; // i = 1, a pepeople can be serverd
       int rem = n - people;
       if(rem <= 0) // MOre than required people have been served
       //   using first cake only. So skip and try for better.
           continue;
       int inter = b / rem;
       x = min(inter, i);
       res = max(res, x);
   }
   cout << res << endl;
}