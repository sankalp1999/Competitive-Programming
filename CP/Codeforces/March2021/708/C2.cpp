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

void solve(int n, int k)
{
    	if(n & 1)
		{
			cout << n/2 << " " << n/2 << " " << 1 << endl;
		}
		else
		{
			if(n % 4 != 0)
			{
				int half = (n / 2) - 1;
				cout << half << " " << half << " " << 2 << endl;
			}
			else
			{
				cout << n/4 << " " << n/4 << " " << n/2 << endl; 
			}
		}
}


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

       while(k > 3)
       {
           cout << 1 << " ";
           k--;
           n--;
       }
       solve(n, k);
   }
}