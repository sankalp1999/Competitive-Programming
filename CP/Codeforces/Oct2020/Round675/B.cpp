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
       lli n, m;
       cin >> n >> m;
       lli arr[n][m];
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
               cin >> arr[i][j];
           }
       }
    // We need to equate those numbers. Those numbers should be equal. It does not matter what they are.
    // We would like to bring them closer to median. Proof is that shifting one left and one right from 
    // median does not affect the answer.
    /*
    a x x b
    x x x x
    c x x d
    */
       lli res = 0;
       bool used[n][m];
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
               used[i][j] = false;
           }
       }
           for (int i = 0; i <= n / 2; i++)
           {
               for (int j = 0; j <= m / 2; j++)
               {
                   // When we reach c, it will repeat. So we want to avoid that.
                   // IF all numbers are equal, then the median of all numbers is same. OK
                   if (used[i][j])
                       continue;
                   int ox, oy, nx, ny;
                   ox = i;
                   oy = j;
                   nx = n - i - 1;
                   ny = m - j - 1;
                   int dx[] = {ox, ox, nx, nx}; // Clean code credit to David Heimer
                   int dy[] = {oy, ny, oy, ny};
                   vector<int> median_calculator;
                   for (int k = 0; k < 4; k++)
                   {
                       if (!used[dx[k]][dy[k]])
                       {
                           used[dx[k]][dy[k]] = true;
                           median_calculator.push_back(arr[dx[k]][dy[k]]);
                       }
                   }
                //    cout << endl;
                   sort(median_calculator.begin(), median_calculator.end());
                   lli median = median_calculator[median_calculator.size() / 2];
                   for (int ele : median_calculator)
                   {
                       res += abs(median - ele);
                   }
               }
           }
           
       cout << res << endl;
   }
}