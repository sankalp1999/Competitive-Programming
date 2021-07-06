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
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<lli> v(n);
        lli sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
            // sum += v[i];
		}
        
        sort(v.begin(), v.end());
        sum = v.back();
        vector<lli> neg(n + 1, 0);
        for(int i = 1; i < n; i++)
        {
            neg[i] = neg[i - 1] + i * (v[i] - v[i - 1]);
            sum -= neg[i];
        }
        cout << sum << endl;
 
	}
	return 0;
}