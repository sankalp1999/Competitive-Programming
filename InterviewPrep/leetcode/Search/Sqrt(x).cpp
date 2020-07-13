
/* Near the end of the search,
the value get weird. Hence, this is a bit different from standard binary search implementation.
*/


class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans;
        if( x == 0 || x == 1)return x;
        while(low <= high)
        {
            int mid = (high - low)/2 + low;
            if(mid <= x/mid)
            {
                ans = mid;
                low = mid + 1;
            }
            else if(mid > x/mid)
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};
