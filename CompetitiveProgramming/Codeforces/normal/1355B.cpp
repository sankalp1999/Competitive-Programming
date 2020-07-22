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
      int count[n+1] = {0};
      int arr[n+1];
      int m1 = 0;
      for(int i = 0 ;i  < n; ++i)
      {
          cin >> arr[i];
          count[arr[i]]++;
          m1 = max(arr[i], m1);
      }
     
    int res = 0;
    int rem = 0;
    for(int i = 1; i <= n ; ++i)
    {
        res += count[i]/i;
        rem += count[i]%i;
       if(rem >= i)
       {
    	res++;
    	rem -= i;
       }
    }
    cout << res << endl;

   }

   
}