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
       string s;
       cin >> s;
       int f = 0;
       for (int i = 0; i < s.size(); i++)
       {
           char c = s[i];
           if(f == 0)
           {
               if(c == 'a')
               {
                   s[i] = 'b';
               }
               else
                   s[i] = 'a';

               f = 1;
           }
           else if(f == 1)
           {
               if(c == 'z')
               {
                   s[i] = 'y';
               }
               else
                   s[i] = 'z';
               f = 0;
           }
       }
       cout << s << endl;
   }
}