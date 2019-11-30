#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0 ;i < n ; i++)
	{
		cin >> arr[i];
	}
	int max1 = 0;
	int dp[n+1] ={0};
	dp[0] = arr[0];
	for(int i = 1 ; i < n; i++)
	{
		dp[i] = max(dp[i], dp[i-1] + arr[i]);
    // two choices
    // 1. extend the subarray and move on 
    // 2. Start a new subarray. 
    // 1 is possible since each dp[i] contains the best possible sum of the subarray till that position.
    
		
	}
	cout << dp[n+1] << endl;
	return 0;
}
