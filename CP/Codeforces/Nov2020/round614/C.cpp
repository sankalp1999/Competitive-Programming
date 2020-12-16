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

   int n, q;
   cin >> n >> q;
   int arr[3][n + 1];
   memset(arr, 0, sizeof(arr));

   int track = 0;

   while(q--)
   {
       int a, b;
       cin >> a >> b;

       arr[a][b] = 1^arr[a][b];

       if(a == 1 && arr[a][b] == 1)
       {
           if(arr[2][b] == 1)
           {
               track++;
           }
           if(b+1<=n && arr[2][b + 1] == 1 )
           {
               track++;
           }
            if(b-1>0 && arr[2][b - 1] == 1 )
           {
               track++;
           }
           
       }
       else if(a == 2 && arr[a][b] == 1)
       {
           
           if(arr[1][b] == 1 )
           {
               track++;
           }
           if(b+1<=n && arr[1][b + 1] == 1 )
           {
               track++;
           }
           if(b-1>0 && arr[1][b - 1] == 1 )
           {
               track++;
           }
       }
       
       else if(arr[a][b] == 0 && a == 1)
       {
            if(arr[2][b] == 1)
           {
               track--;
           }
           if(b+1 <= n && arr[2][b + 1] == 1 )
           {
               track--;
           }
           if(b-1>0 && arr[2][b - 1] == 1 )
           {
               track--;
           }
       }
       else if(arr[a][b] == 0 && a == 2)
       {
            if(arr[1][b] == 1)
           {
               track--;
           }
           if(b+1<=n && arr[1][b + 1] == 1 )
           {
               track--;
           }
           if(b-1>0 && arr[1][b - 1] == 1 )
           {
               track--;
           }
           
       }

       if(track == 0)
       {
           cout << "Yes" << endl;
       }
       else
       {
           cout << "No" << endl;
       }
      }
}