#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int arr[n] = {0};
	long long int count[100005] = {0};
	for(long long int i = 0; i< n; i++)
	{
		cin >> arr[i];
	}
	for(int i = 0 ; i < n ;i++)
	{
		count[arr[i]]++;
	}
	long long int dp[100005] = {0};
	 dp[0] =0 ;
	 dp[1] = count[1]*1;
	for(int i = 2; i<= 100001 ;i++)
	{
		dp[i] = max(dp[i-1], dp[i-2] + count[i]*i);
	}
	cout << dp[100001];
	return 0;
}