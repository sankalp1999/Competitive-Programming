#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int count[10001] = {0};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int dp[n] = {0};
    dp[0] = 0;
    dp[1] = count[1];
    for (int i = 0; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    }
    cout << endl;
    cout << dp[n] << endl;
}