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
       long long int A, B, n;
       cin >> A >> B >> n;
       vector<lli> a(n);
       vector<lli> b(n);
       for (int i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       lli health = 0;
       for (int i = 0; i < n; i++)
       {
           cin >> b[i];
           lli temp = (b[i] + A - 1) / A;
           health += temp * a[i];
       }

       //
       int flag = 0;
       int max_k = 0;
       for (int i = 0; i < n; i++)
       {
           max_k = max((long long)max_k, B - health + a[i]);
       }
       if(max_k > 0)
       {
           cout << "YES" << endl;
       }
       else
           cout << "NO" << endl;
   }
}