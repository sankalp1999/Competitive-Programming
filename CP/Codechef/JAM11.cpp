#include <iostream>
using namespace std;
long long int dp[100002] = {0};
int main() {
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	long long int mod = 1000000007;
	for(int i = 4;i <= 100002; i++)
	{
		dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%mod;
	}
	int t;
	cin >> t;
	while(t--)
	{
		int m;
		cin >> m;
		cout << dp[m] << endl;
	}
	return 0;
}