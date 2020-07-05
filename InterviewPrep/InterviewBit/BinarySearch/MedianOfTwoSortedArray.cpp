class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        if(n > m)
        {
            return findMedianSortedArrays(nums2,  nums1); 
        }
        
        int low, high;
        low = 0;
        high = n;
        
        int partitionX, partitionY;
        int MaxLeftX, MaxLeftY, MinRightX, MinRightY;
        
        while(low <= high)
        {
            partitionX = (low + high)/2;
            partitionY = (m + n + 1)/2 - partitionX;
            
            MaxLeftX = partitionX == 0 ? INT_MIN : nums1[partitionX - 1];
            MinRightX = partitionX == n ? INT_MAX : nums1[partitionX];
            
            MaxLeftY = partitionY == 0 ? INT_MIN : nums2[partitionY - 1];
            MinRightY = partitionY == m ? INT_MAX : nums2[partitionY];
            
            if(MaxLeftX <= MinRightY && MaxLeftY <= MinRightX)
            {
                
                if( (m + n )% 2 == 0)
                {
                    return (max(MaxLeftX, MaxLeftY) + min(MinRightX, MinRightY))/2.0;
                }
                else
                {
                    return max(MaxLeftX, MaxLeftY);        
                }
            }
            else if(MaxLeftX > MinRightY)
            {
                high = partitionX - 1;
            }
            else
            {
                low = partitionX + 1;
            }            
     
            
        }
        
        return 0;
        
    }
};
