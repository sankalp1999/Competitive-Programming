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
       lli n, g, b;
       lli needG;
       
       cin >> n >> g >> b;
       needG = ceil(n / 2.0);
       lli totalG = 0;

       totalG = ((needG) / g) * (g + b); // (Represent)
                        // As (g + b ) cycle. 
       if (needG % g > 0)
       {
           totalG = totalG + (needG % g); // Add remaining using mod
           }
           else
           {
               totalG -= b; // Extra b added 
           }
      // If somehow for ex., G >= n or G >= b, n is the answer     
           cout << max(totalG, n) << endl;
   }

}