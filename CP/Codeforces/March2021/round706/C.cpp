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

       vector<lli> x;
       vector<lli> y;

       int d = n * 2;
       while (d--)
       {
           lli a, b;
           cin >> a >> b;
           if(a == 0) // miner
           {
               y.push_back(abs(b));
           }
           else if(b == 0) /// mine
           {
               x.push_back(abs(a));
           }
       }
       sort(x.begin(), x.end());
       sort(y.begin(), y.end());

       double res = 0;
       double res2 = 0;
       for (int i = 0; i < n; i++)
       {
        //    cout << "HERE" << endl;
        long long int sum = (x[i] * x[i] + y[i] * y[i]);
        res += sqrtl(sum);
        sum = (x[i] * x[i] + y[n - i - 1] * y[n - i - 1]);
        res2 += sqrtl(sum);
       }

        std::cout << std::setprecision(12) << min(res,res2) << endl;
       
   }
}