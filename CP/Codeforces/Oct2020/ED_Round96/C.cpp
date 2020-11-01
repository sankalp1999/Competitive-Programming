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
       if(n == 2)
       {
           cout << 2 << endl;
           cout << 1 << " " << 2 << endl;
           continue;
       }
       cout << 2 << endl;
       lli right;
       lli left;

       right = n;
       left = n - 2;
       cout << n - 2 << " " << n << endl;

       lli mean = (right + left) / 2;
       cout << mean << " " << mean << endl;
       lli k = n - 3;
       left = mean - 2;
       right = mean;

       while(k > 0)
       {
           cout << left << " " << right << endl;
           right = (left + right) / 2;
           left--;
           k--;
       }
   }
}