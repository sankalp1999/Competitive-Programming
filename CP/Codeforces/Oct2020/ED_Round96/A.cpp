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
       int flag = 0;
       for (int i = 0; i <= 333; i++)
       {
           for (int j = 0; j <= 200; j++)
           {
               for (int k = 0; k <= 150; k++)
               {
                   if(i * 3 + j * 5 + k * 7 == n)
                   {
                       cout << i << " " << j << " " << k << " " << endl;
                       flag = 1;
                       break;
                   }
                   if(i * 3 + j * 5  + k * 7 > 1000)
                       break;
               }
               if(flag)
                   break;
           }
           if(flag)
               break;
       }
       if(flag == 0)
       {
           cout << -1 << endl;
       }
   }
   
}