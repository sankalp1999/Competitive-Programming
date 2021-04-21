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

lli help_me(lli mid, lli k)
{

    lli sum = 0;
    while(mid > 0)
    {
        sum += mid;
        mid = mid / k;
    }
    return sum;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, k;
   cin >> n >> k;

   lli left = 0;
   lli right = n - 1; // to be decided.
   // Monotoninc function can be clearly seen.
   // FFFFFF TTTTTT
   // Binary search
   lli res = n;
   while (left <= right)
   {
       lli mid = (right - left) / 2 + left;

       lli value = help_me(mid, k);

       if (value < n)
       {
           left = mid + 1;
       }
       else if (value >= n)
       {
           right = mid - 1;
           res = min(res, mid);
       }
    }
    cout << res << endl;
}