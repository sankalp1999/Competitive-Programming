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
       int n, x;
       cin >> n >> x;
       vector<int> a(n);
       vector<int> b(n);
       for (int i = 0; i < n; i++)
       {
           cin >> a[i];
       }
       sort(a.begin(), a.end());
       for (int i = 0; i < n; i++)
       {
           cin >> b[i];
       }
       sort(b.begin(), b.end(), greater<int>());
       int flag = 0;
       for (int i = 0; i < n; i++)
       {
           if(a[i] + b[i] > x)
           {
               flag = 1;
               break;
           }
       }
       if(flag == 0)
       {
           cout << "Yes" << endl;
       }
       else
       {
           cout << "No" << endl;
       }
    
   }
   return 0;
}