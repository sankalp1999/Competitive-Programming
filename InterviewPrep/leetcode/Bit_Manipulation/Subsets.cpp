
/*
Explanation of the problem using Bit-masking.

nums = ["one", "two", "three", "four"]

There are four items in this array. So, the number of bits that can be
activated are 4.

2^4 combinations are possible.

Hence, we can go through all the 16 combinations and print
only the bits that are set. This way, we can generate the power set.

To get the bit, (i & ( 1 << j ) ) > 0 ? true : false
*/

/*
This approach is O( n * 2^n).
Space complexity O(n)

*/

class Solution {
public:
    bool getBit(int i, int j)
    {
    return  (i & (1 << j)) > 0 ? true : false;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int res = pow(2,nums.size());
        int j = 0;
        for(int i = 0; i < res;  i++)
        {
            vector<int> p;
            for(int j = 0; j < nums.size(); j++)
            {
                if(getBit(i, j))
                    p.push_back(nums[j]);
            }
            v.push_back(p);
        }
        return v;
    }
};

/*More elegant solution by EPI book*/

class Solution {
public:
  vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> power_set;
        for(int int_for_subset = 0; int_for_subset < ( 1 << nums.size()); ++int_for_subset)
        {
            int bit_array = int_for_subset;
            vector<int> subset;
            while(bit_array)
            {
    subset.emplace_back( nums[log2( bit_array & ~(bit_array - 1)) ] )  ; // Retrieve the rightmost set bit.
                bit_array &= bit_array - 1; // Turn off the rightmost set bit.
            }
            power_set.emplace_back(subset);  
        }
    return power_set;
 }
};

