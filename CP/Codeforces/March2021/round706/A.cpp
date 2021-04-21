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
       string s;
       cin >> s;

       int count = 0;
       for (int i = 0; i < n/ 2; i++)
       {
           if(s[i] == s[n - 1 - i])
           {
               count++;
           }
           else
               break;
       }
       if(k == 0)
       {
           cout << "YES" << endl;
       }
       else if(n % 2 == 1 && count >= k)
       {
           cout << "YES" << endl;
       }
       else if(n % 2 ==0 && count > k)
       {
           cout << "YES" << endl;
       }
       else
           cout << "NO" << endl;
   }
}