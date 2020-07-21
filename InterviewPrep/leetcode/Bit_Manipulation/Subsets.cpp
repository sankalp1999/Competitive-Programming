
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
