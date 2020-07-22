#include <iostream>
using namespace std;

// Alternatively, if one sees carefully,
// the answer is (k/2) + 1
// e.g:- for n=4,(n divide two)=(4/2)=2;
// so picking one 2 out of total 2s and rest 1s form one way i.e.{2,1,1}..
// picking two 2s out of total 2s and rest 1s form one way i.e.{2,2}..
// that's all...so number of ways=2.
// 2. add( one):-now not picking 2s at all so number of way=1.

int main() {
	int t;
	cin >> t;
	int p = 1e6 + 7;
	int dp[p]; // array 
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 2;
	for(int i = 4; i <= p; i++)
	{
	    if(i%2==0)
	        dp[i] = dp[i-1]+1;
	   else
            dp[i] = dp[i-1];
	}
	while(t--)
	{
	    int k;
	    cin >> k;
	    cout << dp[k] << endl;
	}
	return 0;
}
