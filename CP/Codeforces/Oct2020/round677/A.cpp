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
   
   vector<string> v;
   string s = "";
   for (char c = '1'; c <= '9'; c++)
   {
       s = "";
       for (int j = 0; j < 4; j++)
       {
           s += c;
           v.push_back(s);
       }
   }
  

    int t;
   cin >> t;
   

   while(t--)
   {
       string input;
       cin >> input;
       lli res = 0;
       for (int i = 0; i < v.size(); i++)
       {
           
           res += (long long int)(v[i].size());
           if(v[i] == input)
           {
               break;
           }
       }
       cout << res << endl;
   }
}