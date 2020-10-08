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
   int preva, prevb;
   int curra, currb;
   preva = prevb = 0;
   lli diff = 0;
   while (t--)
   {
       cin >> curra >> currb;
       if(preva == prevb)
       {
          // If the previous two numbers are equal, then 
          // we can get equal till min(curra, currb) 
          // 1 1
          // 3 4
          diff += min(curra, currb) - preva;
       }
       else if(preva != prevb)
       {
           // First make them equal
           diff += max(0, min(curra, currb) - max(preva, prevb) + 1);
           // +1 for the case when we make them both equal
           // Till Curra, currb, we get the difference. 
           // 0 for the case when disjoint scores line 
       }
       preva = curra;
       prevb = currb;
   }
   cout << diff  + 1<< endl;
}