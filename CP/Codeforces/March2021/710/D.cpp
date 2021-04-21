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
       map<int, int> counter;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           counter[v[i]]++;
       }
       lli res = 0;
       lli loan = 0;
       int flag = 0;
       while (!counter.empty())
       {
           auto it = counter.begin();
           int _size = counter.size();
           lli remove = min(_size, it->first);
           loan = remove; // subtract while traversing
           res += 2 * remove;
       }
    }
}