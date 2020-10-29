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

   vector<long long int> arr;
   for (lli i = 0; i <= 30; i++)
   {
       arr.push_back(1LL << i);
   }
   

   int t;
   cin >> t;
   while(t--)
   {
       lli n;
       cin >> n;
       lli subtract = 0;

       int flag = 0;
       if( (n & (n - 1)) == 0)
       {
           flag = 1;
       }

       for (int i = 0; i < (log2(n)) + flag ; i++)
       {
           subtract += arr[i];
       }
       cout << n * (n + 1) / 2 - (2 * subtract) << endl;
    }
    return 0;
}