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
   lli n, m;
   cin >> n >> m;
   vector<int> v(m);
   if(m == 0)
   {
       cout << "YES" << endl;
       return 0;
   }
   REP(i, m)
       cin >> v[i];
   sort(v.begin(), v.end());
   
   if(v[0] == 1 || v[v.size() - 1] == n)
       {
           cout << "NO" << endl;
           return 0;
       }
       int k = 0;
       for (int i = 0; i < m -1; i++)
       {
        if(v[i] == v[i+1] - 1)
        {
            k++;
        }
        else
        {
            k = 0;
        }

        if(k == 2)
        {
            cout << "NO" << endl;
            return 0;
        }
       }
       cout << "YES" << endl;
       return 0;
}
