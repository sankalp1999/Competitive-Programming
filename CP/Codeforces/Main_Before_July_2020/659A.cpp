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
   int n, a, b;
   cin >> n >> a >> b;
   if(b == 0)
   {
       cout << a << endl;
       return 0;
   }

   int k = (a + (b + n) % n)%n;
   
   if (k < 0)
       k = (k + n)%n ;
   if(k == 0)
       k = n;
   cout << k << endl;
}