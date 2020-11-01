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
   int h, w;
   cin >> h >> w;
   char arr[h][w];
   lli k = 0;
   for (int i = 0; i < h; i++)
   {
       cin >> arr[i];
       for(char c : arr[i])
       if(c == '.')
       {
           k++;
       }
   }
   lli cont = pow(2, k - 1);
   lli result = 0;
   for (int i = 0; i < h; i++)
   {
       for (int j = 0; j < w; j++)
       {
    
        if(arr[i][j] == '.')
        {
            lli res = 1;
            if(i - 1 >= 0 && arr[i-1][j] == '.')
            {
                res++;
            }
            if (i + 1 < h && arr[i + 1][j] == '.')
            {
                res++;
            }
            if (j + 1 < w && arr[i ][j + 1] == '.')
            {
                res++;
            }
            if (j - 1 >= 0 && arr[i ][j - 1] == '.')
            {
                res++;
            }
            result = (result % mod + ((res % mod) * (cont % mod)) % mod) % mod;

        }
       }
   }
   cout << result << endl;
}