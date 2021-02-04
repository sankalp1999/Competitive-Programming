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
   int n;
   cin >> n;
   string s;
   cin >> s;
   
   // If n is even, then both need to be even.
   // If n is odd, then one odd and one even

   int b, w;
   b = w = 0;
   for(char c : s)
   {
       if(c == 'B')
       {
           b++;
       }
       else
       {
           w++;
       }
    }
    
    if( n % 2 == 0)
    {
        if(b % 2 != 0 || w % 2 != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
}
