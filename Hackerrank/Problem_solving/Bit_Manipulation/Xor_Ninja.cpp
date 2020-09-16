#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the xoringNinja function below.
 */
 long long int power(long long int x, unsigned int y, long long int p)  
{  
    long long int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
int xoringNinja(vector<int> arr) {
    
    long long int res = 0;
    for(int i : arr)
    {
        res = res | i;
    }
    int n = arr.size();
    int mod = 1e9 + 7;
    res = (power(2,n-1,mod)%mod * (res % mod) )% mod;
    return res;
}

/*
Solution: Find the OR of all the elements and multiply it with 2^(n-1) where n is the total number of elements. This gives us the answer.

Idea:

There will be a total of  subsets.
If  bit of any element is set, then that bit will be set in the xor of half of the total subsets which is .
To find out all of the set bits in all of the numbers we find the OR of all of the numbers.
Since each set bit appears in half of the total subsets, we multiply the OR of all of the numbers with 2^n-1 to get the final result.
*/