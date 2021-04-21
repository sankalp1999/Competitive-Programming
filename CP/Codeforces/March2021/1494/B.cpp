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
       int n, u, r, d, l;
       cin >> n >> u >> r >> d >> l;

       int u1, r1, d1, l1;
       int yes = 0;
       // Try all 16 configurations of corners
       // and see if positions are valid i.e 0 <= x <= n - 2;

       
       for (int i = 0; i < 16; i++)
       {
           string s = "";
           //    u1 = u;
           //    r1 = r;
           //    d1 = d;
           //    l1 = l;

           if (i & 1)
           {
               s += 'a';
               //    u1--;
               //    l1--;
           }
           if( i & 2)
           {
               s += 'b';
               //    u1--;
               //    r1--;
           }

           if(i & 4)
           {
               s += 'c';
               //    r1--;
               //    d1--;
           }  
           if(i &8)
           {
               s += 'd';
               //    d1--;
               //    l1--;
           }
           cout << s << endl;
           //    vector<int> v = {u1, d1, r1, l1};
           //    int flag = 0;
           //    for (int j = 0; j < 4; j++)
           //    {
           //         if(v[j] < 0 || v[j] > n - 2)
           //         {
           //             flag = 1;
           //             break;
           //         }
           //    }
           //    if(flag == 0)
           //    {
           //        yes = 1;
           //        break;
           //    }
       }
       if(yes == 1)
       {
           cout << "YES" << endl;
       }
       else
           cout << "NO" << endl;
   }
}