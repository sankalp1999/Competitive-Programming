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
// sankalp shubham
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       string s[9];
	REP(i, 9)
	{
		cin >> s[i];
		REP(j , 9)
		{
			if(s[i][j] == '8')// any number will do
			{
				s[i][j] = '1';
			}
		}
		cout << s[i] << endl;
	}
	
   }

      
   return 0;
}