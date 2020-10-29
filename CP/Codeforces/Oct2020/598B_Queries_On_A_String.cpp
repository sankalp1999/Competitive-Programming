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
   string s;
   cin >> s;
   int n;
   cin >> n;
   while(n--)
   {
       lli l, r, k;
       cin >> l >> r >> k;
       k = k % (r - l + 1);
       l--;
       r--;

       reverse(s.begin() + l, s.begin() + r + 1);
       reverse(s.begin() + l, s.begin() + l + k );
       reverse(s.begin() + l + k , s.begin() + r + 1);
    }
       cout << s << endl;
}
