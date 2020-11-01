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
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       lli sum = 0;
        /// Just count the zeros between 1's
       lli zero = 0;
       int flag = 0;
       for (int i = 0; i < n; i++)
       {
           if (v[i] == 1 && flag == 0)
           {
               flag = 1;
           }
           if(flag == 1 && v[i] == 0)
           {
               zero++;
           }

           if(v[i] == 1 && flag == 1)
           {
               sum += zero;
               zero = 0;
           }
       }
       cout << sum << endl;
   }
}