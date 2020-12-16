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

/* Observation */

// Whatever bit is already set in the numbers will surely be 
// set in the final answer. But does that 
// mean that other bits will not be set?

// No. It may happen that upon choosing some numbers
// and summing them, we can generate some carry overs
// which can propagate.


/* Only the bits to the right will make a difference. */


// Explanation of the above.
//2. If we have say two number with (i-1)th bit on
// then if we choose these two numbers in our 
// subsequence, ith bit will be turned on.

// Since, those two bits will get added and a 
// carry is generted. 

// IN general,  u can make a ith bit with 2 (i-1)th bit
// or ith bit = 4 (i-2)th bit.

// How? 2 i-2th bit can make ith bit. Repeat.
// Add those i-1 bit. So, we count the number
// of ones in the bit representation of numbers
// and dp[i] += dp[i-1]/2 


// Suppose, there are 2**32 * 10**5, then 
// answer has roughly 49 bits





int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--)
   {
       long long int sum = 0;
       int n;
       cin >> n;
       vector<int> v(n);
       lli max_ele = 0;
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
           sum += v[i];
           max_ele = max((long long)v[i], max_ele);
       }
      



       int dp[50] = {0}; 

        for (int j = 0; j < 30 ; j++)
        {
            
            int mask = (1LL << j);

            for (int i = 0; i < n; i++)
            {
                if (v[i] & mask)
                {
                    dp[j]++;
                }
            }
           
        }

        lli num = 0;
        for (int i = 0; i < 50; i++)
        {
            if(i)
            {
                dp[i] += dp[i - 1] / 2;
            }
        }

            for (int i = 0; i < 50; i++)
            {
                if (dp[i] > 0)
                {
                    num = num | (1LL << i);
                }
            }

        cout << num << endl;

   }
}
