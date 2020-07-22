#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
const int N=1e5+5;
 
int n, m;
int cache[N]; // for memoization
 
int dp(int k)
{
	if(k<=0 || k>=2e4) // constraint, return max number so that min will select smaller
		return 1e9;
	if(k==m)
		return 0;
	int &ans=cache[k]; // reference variable ??????
	if(ans!=-1) // memoization
		return ans; 
	ans=1e9;
	ans=1+min(dp(2*k), dp(k-1)); // recurrence
	return ans;
}	
 
int32_t main()
{
    IOS;
    memset(cache, -1, sizeof(cache));
    cin>>n>>m;
    cout<<dp(n);
    ret