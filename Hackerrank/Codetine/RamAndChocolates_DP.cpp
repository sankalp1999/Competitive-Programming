#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
This is essentially similar to the house robber problem
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
            cout << v[0] << endl;
            continue;
        }
            else if(n == 2)
        {
            cout << max(v[0], v[1]) << endl;
            continue;
        }
       long long int dp[n+1]; 
  

      dp[0] = v[0]; 
      dp[1] = max(v[0], v[1]); 
  
    // Fill remaining positions 
     for (int i = 2; i<n; i++) 
        dp[i] = max( (long long )v[i]+ (long long )dp[i-2], (long long )dp[i-1]); 
        
        cout << dp[n-1] << endl;
        
    }
}
