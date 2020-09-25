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
       string s;
       cin >> s;
       vector<int> v;
       for(char c : s)
       {
           int x = c - '0';
           x--;
           v.push_back(x);
       }
       long long int count = 0;
       unordered_map<int, int> m;
       m[0] = 1;
       lli sum = 0;
       for (int i = 0; i < n; i++)
       {
           sum += v[i];
           if(m.find(sum) != m.end())
           {
               count += m[sum];
           }
           m[sum]++;
       }
        cout << count << endl;
   }
}


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
       string s;
       cin >> s;
       vector<int> v;
       for(char c : s)
       {
           int x = c - '0';
           v.push_back(x);
       }
       long long int count = 0;
       unordered_map<int, int> m;
       lli sum = 0;
       m[0]=1;
       for (int i = 1; i <= n; i++)
       {
           sum += v[i-1];
           count += m[sum- i];
           m[sum - i]++;
       }
        cout << count << endl;
   }
}