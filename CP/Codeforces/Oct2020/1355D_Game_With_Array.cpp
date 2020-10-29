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
   t = 1;
   while (t--)
   {
       int n, s;
       cin >> n >> s;
       if(s / n < 2)
       {
           cout << "NO" << endl;
       }
       else
       {
           cout << "YES" << endl;
           lli sum = 0;
           for (int i = 0; i < n - 1; i++)
           {
               cout << 2 << " ";
               sum += 2;
           }
           cout << s - sum << endl;
           cout << s - 1 << endl;
       }
   }
}