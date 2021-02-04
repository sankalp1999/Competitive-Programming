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
   int n, k;
   cin >> n >> k;
   string s;
   cin >> s;
   
   unordered_set<char> myset;

   for (int i = 0; i < k; i++)
   {
       char c;
       cin >> c;
       myset.insert(c);
   }


   // When a character cannot be used, the substring is broken and no connections 
   // can be made from previous substring to next subsring.

   // hence calucate the no. of substrings in the segments and then add.
   lli count = 0;
   lli res = 0;
   for (int i = 0; i < s.size(); i++)
   {
        if(myset.find(s[i]) != myset.end())
        {
            count++;
        }
        else
        {
            res += (count) * (count + 1) / 2;
            count = 0;
        }
   }
    res += (count) * (count + 1) / 2;

   cout << res << endl;
}