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
       vector<int> x(n), y(n);
       for (int i = 0; i < n; i++)
       {
           cin >> x[i] >> y[i];
       }
       sort(x.begin(), x.end());
       sort(y.begin(), y.end());
       
       // If you start moving from the start of the arry
       // say d distance from the first point in say an array
       // of size 4,  then you will move d distance from
       // first point but you will move closer to the other 
       // three points. This keeps on going till the median
       // after which this the distance again stops increasing.

       if(n % 2 == 1)
       {    

           // The idea is that if odd numbers only,
           // then only one median.
           cout << 1 << endl;
       }
       else
       {    

           // If even, then there are two medians and every 
           // integer is also a median.
           lli left = x[ (n + 1) / 2] - x[ (n - 1)/ 2] + 1;
           lli right = y[ (n + 1) / 2]  - y[ (n - 1) / 2] + 1;
           cout << left * right << endl;
       }
   }
}