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
       int n, k;
       cin >> n >> k;
       int visited[k + 1] = {0};
       vector<int> res;
       for (int i = n; i > k; i--)
       {
           res.push_back(i);
       }
       for (int i = k - 1; i >= 1; i--)
       {
           if(visited[i] == 0)
           {
               res.push_back(i);
               visited[abs(k - i)] = 1;
           }
           else if(visited[i] == 1)
           {
               continue;
           }
       }
       cout << (int)res.size() << endl;
       for(int i : res)
       {
           cout << i << " ";
       }
       cout << endl;
   }
}