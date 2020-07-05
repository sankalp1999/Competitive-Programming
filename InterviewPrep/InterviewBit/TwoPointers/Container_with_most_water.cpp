/*
It is optimal to start with the largest width since it is one of the factors.

Area = (width) * ( min(A[i], A[j]) 

So, the question is how will the pointers move?
Now, one of the numbers will be smaller. We would like to increase that. So, we can just move the 
number i.e A[i] or A[j] which is smaller. That way, we have chance of getting a higher value.

This is similar to Three Pointers question in InterviewBit Two pointers question.

*/

/* LEETCODE EXPLANATION
Initially we consider the area constituting the exterior most lines. Now, to maximize the area, 
we need to consider the area between the lines of larger lengths. If we try to move the pointer at the 
longer line inwards, we won't gain any increase in area, since it is limited by the shorter line. But
moving the shorter line's pointer could turn out to be beneficial, as per the same argument, 
despite the reduction in the width. This is done since a relatively 
longer line obtained by moving the shorter line's pointer might overcome the reduction in area caused by the width reduction.
*/


int Solution::maxArea(vector<int> &height) {
       
        int i = 0;
        int j = height.size() - 1;
        int max_area = 0;
        int smaller;
        while(i < j)
        {
            smaller = min(height[i], height[j]);
            max_area = max(max_area, (j - i) * (smaller));
            if(height[i] == smaller)
            {
                i++;
            }
            else if(height[j] == smaller)
            {
                j--;
            }
        }
        return max_area;
}
