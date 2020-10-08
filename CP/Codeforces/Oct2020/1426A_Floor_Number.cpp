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
    /*
    1 2
    3 -- > x + 2
    x + 3 -- > 2 * x + 2
    2 * x + 3 --> 3* x + 2
    x - 1 floors on each floor.
    */

       int n, x;
       cin >> n >> x;
       if(n == 1 || n == 2)
       {
           cout << 1 << endl;
       }
       else
       {
           int floor = 1;
           for (int i = 2; i <= 1000; i += x)
           {
               if(i >= n)
               {
                   break;
               }
               floor++;
           }
           cout << floor << endl;
       }
   }
}