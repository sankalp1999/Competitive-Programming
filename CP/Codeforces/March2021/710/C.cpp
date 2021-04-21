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

int lcs(string X, string Y, int m, int n)
{

    int cache[m + 1][n + 1];
    int result = 0; // To store length of the

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
 
            if (i == 0 || j == 0)
                cache[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                cache[i][j] = cache[i - 1][j - 1] + 1;
                result = max(result, cache[i][j]);
            }
            else
                cache[i][j] = 0;
        }
    }
    return result;
}



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       string a, b;
       cin >> a >> b;
       int n = a.size();
       int m = b.size();
       cout << n + m - 2 * lcs(a, b, a.size(), b.size()) << endl;
   }
}