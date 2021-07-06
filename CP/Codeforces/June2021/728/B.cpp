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
      vector<lli> arr(n + 1);
      for (int i = 1; i <= n; i++)
      {
         cin >> arr[i];
      }
      int count = 0;
      for (int i = 1; i <= n; i++)
      {
         for (int j = arr[i] - i; j <= n; j += arr[i])
         {
            // cout << j << endl;
            if (j >= 1)
            {
               if( arr[i]*arr[j] == (i + j) and i < j)
               {
                  count++;
               }
            }
         }
      }
      cout << count << endl;
      // return count;
   }
}

// 5 aj = 1 + j 

// j starts from 4 and ends and runs in iterations of 5.
// N log n since we run in increments of 


// i + j should be a multiple of a[i];
