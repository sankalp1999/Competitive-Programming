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
//    int t;
//    cin >> t;
   int t = 1;
   while (t--)
   {
       int n;
       cin >> n;
       
       if( n == 0)
       {
           cout << 1 << endl;
           return 0;
       }
       n = n % 4;
       if( n == 0)
       {
           cout << 6 << endl;
       }
       else if(n == 1)
       {
           cout << 8 << endl;
       }
       else if(n == 2)
       {
           cout << 4 << endl;
       }
       else
       {
           cout << 2 << endl;
       }
      }
}