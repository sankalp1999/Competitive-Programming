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


/* 1500 problems are doable. they are not that difficult if you spend some time */

/*
Measure the gap between the elements.
If they appear at a gap of say 2 then, they are a candidate for segments of size 3.

Also, if someone is candidate for size 2, then it's candidate for all k > 2.

*/



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
       vector<vector<int>> pos(n + 1);
      for (int i = 1; i <= n; i++)
       {
           pos[i].push_back(-1);
       }
       for (int i = 0; i < n; i++)
       {
           int temp;
           cin >> temp;
           pos[temp].push_back(i );
       }
       for (int i = 1; i <= n; i++)
       {
           pos[i].push_back(n);
       }

       vector<int> ans(n  + 1, -1);
       int k = n;

       // If a min number repeats, then it will 
       // be there for all the big.
       for (int i = 1; i <= n; i++)
       {
           int sz = pos[i].size();
           int max_gap = 0;
        
           for (int j = 1; j < sz; j++)
           {
               max_gap = max(max_gap, abs( pos[i][j] - pos[i][j - 1]));
           }
           while(k >= max_gap)
           {
               ans[k--] = i;
           }
       }
       for (int i = 1; i <=  n; i++)
       {

           cout << ans[i]  << " ";
       }
           cout << endl;
   }
}



/* AshishGup implementation is really good */

#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N = 3e5 + 5;

int n;
int a[N], ans[N];
vector<int> pos[N];

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
			pos[i].clear();
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			ans[i] = 1e9;
			pos[a[i]].push_back(i);
		}
		for(int i = 1; i <= n; i++)
		{
			if(!pos[i].size())
				continue;
			int diff = max(pos[i][0], n + 1 - pos[i].back());
			for(int j = 0; j + 1 < pos[i].size(); j++)
				diff = max(diff, pos[i][j + 1] - pos[i][j]);
			ans[diff] = min(ans[diff], i);
		}
		for(int i = 1; i <= n; i++)
		{
			if(i >= 2)
				ans[i] = min(ans[i], ans[i - 1]);
			int cur = ans[i];
			if(cur == 1e9)
				cur = -1;
			cout << cur << " ";
		}
		cout << endl;
	}
	return 0;
}