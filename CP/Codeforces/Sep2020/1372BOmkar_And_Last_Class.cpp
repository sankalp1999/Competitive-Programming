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

long long int lcm(long long int a, long long int b)
{
   return (a * b)/gcd(a,b);
}

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
      int left = 1;
      int right = n - 1;
      int min_a, min_b ;
      min_a = min_b = n;
      long long int min_lcm = 1e9 + 1;
      if(n % 2 == 0)
      {
         cout << n / 2 << " " << n / 2 << endl;
      }
      else
      {
         int smallest_factor = 0;
         int flag = 0;
         
         for (int i = 2; i * i <=  n; i++)
         {
               if(n % i == 0)
               {
                  flag = 1;
                  lli temp = lcm(i, n - i);
                  if( temp < min_lcm)
                  {
                     min_lcm = temp;
                     smallest_factor = i;
                  }
                  lli temp2 = lcm(n/i, n - n/i);
                  if( temp2 < min_lcm)
                  {
                     min_lcm = temp2;
                     smallest_factor = n/i;
                  }
            
               }
         }
         if(flag == 0) // prime number
         {
            cout << n - 1 << " " << 1 << endl;
         }
         else
         {
            cout << smallest_factor << " " << n - smallest_factor << endl;
         }
      }
        
   }
   
}