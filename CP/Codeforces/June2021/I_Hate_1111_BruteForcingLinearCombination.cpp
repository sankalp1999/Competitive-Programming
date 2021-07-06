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
       if(n % 11 == 0){
           cout << "YES" << endl;
           continue;
       }
// Suppose X=A⋅11+B⋅111, where A,B≥0. 
// Suppose B=C⋅11+D, where D<11. Then X=(A+C⋅111)⋅11+D⋅111. 
// So we can just brute force all 11 value of D to check whether 
// X can be made.


// Check X - D  * 111 == 0. A and C are eliminated.

       int flag = 0;
       for (int i = 0; i < 11; i++)
       {
           if(111 * i <= n and (n - 111 * i) % 11 == 0)
           {
               flag = 1;
               cout << "YES" << endl;
               break;
           }
       }
       if(flag == 0)
       {
           cout << "NO" << endl;
       }
   }
}