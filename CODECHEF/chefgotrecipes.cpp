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
       vector<int> v;
       for (int i = 0; i < n; i++)
       {
           char arr[1001];
           cin >> arr;
           int bitset = 0;
           for (char c : arr)
           {
               if(c == 'a')
               {
                   bitset = bitset | (1 << 0);
               }
               else if(c == 'e')
               {
                   bitset = bitset | (1 << 1);
               }
               else if(c == 'i')
               {
                   bitset = bitset | (1 << 2);
               }
               else if(c == 'o')
               {
                   bitset = bitset | (1 << 3);
               }
               else if(c == 'u')
               {
                   bitset = bitset | (1 << 4);
               }
           }
           v.pb(bitset);
       }
       int ans = 0;
       for (int i = 0; i < v.size(); i++)
       {
           for (int j = 0; j < v.size(); j++)
           {
               if(i != j)
               {
                   if(v[i] | v[j] >= 31)
                       ans++;
               }
           }
       }
       cout << ans << endl;
   }
}