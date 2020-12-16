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
       int n, m;
       cin >> n >> m;
       int arr[n][m];
       REP(i,n)
       {
           REP(j,m)
           {
               cin >> arr[i][j];
           }
       }
       // The increment operation allows us to increment the cell
       // that means essentially change the parity.
       // We can convert into the chessboard pattern since if u 
       // consider a chessboard, the parity of two adjacent cells
       // is never same.

       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
               if( (i + j)%2 == 0 )
               {
                   if(arr[i][j] % 2 == 1)
                   {
                       arr[i][j] += 1;
                   }
               }
               else 
               {
                   if(arr[i][j] % 2 == 0)
                   {
                       arr[i][j] += 1;
                   }
               }
           }
       }
       REP(i,n)
        {
            REP(j,m)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
   }
}