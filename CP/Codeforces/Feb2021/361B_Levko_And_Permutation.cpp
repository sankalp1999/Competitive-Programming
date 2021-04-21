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
   int n, k;
   cin >> n >> k;
   if (k == n) {
     cout << -1 << endl;
     return 0;
   }
   if (k == n - 1) {
     for (int i = 1; i <= n; i++) {
       cout << i << " ";
     }
     cout << endl;
     return 0;
   }
   vector<int> res;
   if (k < n - 1) {
     int i = 1;
    
     for (i = 1; i <= k + 1; i++) {
    //    cout << i << " ";
       res.push_back(i);
       }
       int temp = i;
       i++;
       while (i <= n) {
        //  cout << i << " ";
         res.push_back(i);
         i++;
       }
       res.push_back(temp);
       //    cout << temp << endl;
       swap(res.front(), res.back());
   }
   for (int i : res) {
     cout << i << " ";
   }
   cout << endl;
   
}