#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
This is a classic DP problem (House Robber)
We need to consider the last two entries.
It can be generalised to k
We can do that using a for loop
*/

int main() {
    int t ;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long int> v;
        for(int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            v.push_back(temp);
        }
        

        if(n == 1)
        {
            cout << v[0] << endl; // just print it. Nothing to look before that.
            continue;
        }
            else if(n == 2)
        {
            cout << max(v[0], v[1]) << endl; 
            continue;
        }
       long long int dp[n+1]; 
  

      // Initialize dp array with the best possible entries.
      dp[0] = v[0]; 
      dp[1] = max(v[0], v[1]);  
  
    // Fill remaining positions 
        
     // At each step, we decide either to continue with what we already have and not select current i.e we choose dp[i-1]
     // or we take current plus the best we could get from before.
     for (int i = 2; i<n; i++) 
        dp[i] = max( (long long )v[i]+ (long long )dp[i-2], (long long )dp[i-1]); 
        
        cout << dp[n-1] << endl;
        
    }
}
