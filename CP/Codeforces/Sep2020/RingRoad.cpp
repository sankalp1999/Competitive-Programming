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
   int n;
   cin >> n;
   vector<int> in(n + 1, 0), out(n + 1, 0);
   int vertices = n;
   lli totw = 0;
   lli sum = 0;
   
   while (vertices--)
   {
       int a, b, c;
       cin >> a >> b >> c;
       // The elegant way to do this problem
       // All the cities are connected i.e there is one edge between each city
       // either from a -- > b or b --> a
       // There are only two paths to travel from each city.
       // So, some paths are reverse. These cities have indegrees = 2 and outdegree = 0
       // or vice - versa.

       // So, we calculate cost of one representation. The cost of other representation 
       // is simply the total weight - cost of 1st repr

       // The logic we use to simplify the implementation is to
       // quickly detect when the outdegree of a or indegree of b can be become 2

       // Here, only we will perform a reversal of edge. So, we add the cost. Now,
       // We reversed so out[a] is still marked but in[a] is marked and out[b] is marked.
       // since it's from b to a
       if(out[a] || in[b])
       {
   		out[b] = 1;
   		in[a] = 1;
   		sum += c;
       }else
       {
       out[a]++;
       in[b]++;
       }
       totw += c;
   }
 
   
   if(sum > totw - sum )
   {
       cout << totw - sum << endl;
   }
   else
   {
       cout << sum << endl;
   }
}