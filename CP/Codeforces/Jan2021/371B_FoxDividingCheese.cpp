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

int div(int p, int& a, int& b)
{
    int c1 = 0;
    while (a % p == 0)
    {
        c1++;
        a = a / p;
    }
    int c2 = 0;
    while (b % p == 0)
    {
        c2++;
        b = b / p;
    }
    return abs(c2 - c1);
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int a, b;
   cin >> a >> b;
   int ans = 0;
   // Just keep dividing by 2,3,5
   // if numbers turn out to be equal, then
   // things are fine
   // Otherwise, -1
   ans += div(2,a,b);
   ans += div(3,a,b);
   ans += div(5,a,b);

    if(a == b)
    {
        cout << ans << endl;
    }
    else
        cout << -1 << endl;
}