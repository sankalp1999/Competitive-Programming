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
    //    cout << n << endl;
       if (n == 1)
       {
           cout << "FastestFinger" << endl;
       }
       else if(n == 2)
       {
           cout << "Ashishgup" << endl;
       }
       else if(n % 2 == 1)
       {
           cout << "Ashishgup" << endl;
       }
       else
       {
           if(n % 2 == 0)
           {
               if( !(n & (n - 1))) // power of two
               {
                cout << "FastestFinger" << endl;
               }
               else
               {
                   int twos = 0;
                   while(n % 2 == 0)
                   {
                       twos++;
                       n = n / 2;
                   }
                   int odd = 0;
                   if(n & 1)
                       odd++;
                   for (lli i = 3; i * i <= n; i += 2)
                   {
                       while(n % i == 0)
                       {
                           n = n / i;
                           odd++;
                       }
                   }
                   if(twos == 1 && odd > 1)
                   {
                       cout << "Ashishgup" << endl;
                   }
                  else if(twos == 1 && odd == 1)
                  {
                      cout << "FastestFinger" << endl;
                  }
                  else if(twos > 1 && odd >= 1)
                  {
                      cout << "Ashishgup" << endl;
                  }
               }
           }
       }
   }
}