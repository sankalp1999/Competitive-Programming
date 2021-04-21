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
   string s;
   cin >> s;
   vector<int> a(n), b(n);
   for (int i = 0; i < n; i++)
   {
       cin >> a[i] >> b[i];
   }

   int count = 0;
   for (char c : s)
   {
       if(c == '1')
       {
           count++;
       }
   }
   vector<int> store(1600, 0);
   for (int i = 0; i < n; i++)
   {
       if(s[i] == '0')
       {
           int limit = b[i];
           while(limit < 1000)
           {
               for (int start = limit; start < limit + a[i]; start++)
               {
                   store[start]++;
               }
               limit += 2 * a[i];
           }
       }
       else if(s[i] == '1')
       {
           for (int j = 1; j < b[i]; j++){
               store[j]++;
           }
           int limit = b[i] + a[i];
           while(limit < 1000)
           {
               for (int start = limit; start < limit +  a[i]; start++)
               {
                   store[start]++;
               }
               limit += 2 * a[i];
           }
       }
   }
   for (int i = 1; i < 1000; i++)
   {
       count = max(count, store[i]);
   }
       cout << count << endl;
}