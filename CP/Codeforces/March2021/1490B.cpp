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
       vector<int> v(n);
       int c0, c1, c2;
       c0 = c1 = c2 = 0;

       int target = n / 3;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           v[i] = v[i] % 3;
           if(v[i] == 0)
               c0++;
            else if(v[i] == 1)
                c1++;
            else
                c2++;
       }

       lli count = 0;
       while (c0 != c1 || c1 != c2)
       {

  
           while (c0 < target)
           {
            
               if (c2 > 0)
               {
                  c0++;
                   c2--;
               }
               else
                   break;

               count++;
           }

           while (c1 < target)
           {
              
               if (c0 > 0)
               {
                   c1++;
                   c0--;
               }
               else
                   break;

               count++;
           }

           while (c2 < target)
           {
               if (c1 > 0)
               {
                   c2++;
                   c1--;
               }
               else
                   break;
               count++;
           }
        }
    cout << count << endl;
   }
}