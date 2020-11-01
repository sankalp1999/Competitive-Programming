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
       vector<lli> v(n + 1);
       unordered_set<lli> s;
       for (lli i = 1; i <= n; i++)
       {
           cin >> v[i];
           s.insert(v[i]);
       }
        if (s.size() == 1)
           {
               cout << "NO" << endl;
               continue;
           }
       int a = v[1];
       int b;
       for (int j = 2; j <= n; j++)
       {
           if(a != v[j])
           {
               b = j;
               break;
           }
       }
       cout << "YES" << endl;
        // Pair one element with all
        // Find next diff element and pair it with remaining elements of v[0]
        // This way all will
        // be connected. Since, the first element 
        // is paired with all diff and then we can 
        // pair all remaining first element(coordinates) 
        // with some different element(it will already be connected)
        // to the rest of the graph.


       for (int j = 2; j <= n; j++)
       {
           if (v[j] != a)
           {
               cout << 1 << " " << j << endl;
           }
           else
           {
               cout << j << " " << b << endl;
           }
       }


          

    
   }
}
