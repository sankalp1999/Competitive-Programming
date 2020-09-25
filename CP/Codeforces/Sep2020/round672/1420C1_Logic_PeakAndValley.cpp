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
       int n, q;
       cin >> n >> q;
       vector<int> v;
       v.push_back(INT_MIN);
       for (int i = 0; i < n; i++)
       {
           int temp;
           cin >> temp;
           v.push_back(temp);
       }
       v.push_back(INT_MIN);
       int count = 0;
       int toggle = 0;
       vector<int> res;
       for (int i = 1; i <= n; i++)
       {
           if(v[i] > v[i-1] && v[i] > v[i + 1] && toggle == 0)
           {
               res.push_back(v[i]);
               toggle = 1;
           }
           else if(v[i] < v[i-1] && v[i] < v[i+1])
           {
               res.push_back(v[i]);
               toggle = 0;
           }
       }
       lli sum = 0;
       for (int i = 0; i < res.size(); i++)
       {
           if(i%2==0)
           {
               sum += res[i];
           }
           else
           {
               sum -= res[i];
           }
        }
        cout << sum << endl;
        //    cout << endl;
   }
}