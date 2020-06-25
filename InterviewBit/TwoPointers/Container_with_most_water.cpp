/*
It is optimal to start with the largest width since it is one of the factors.

Area = (width) * ( min(A[i], A[j]) 

So, the question is how will the pointers move?
Now, one of the numbers will be smaller. We would like to increase that. So, we can just move the 
number i.e A[i] or A[j] which is smaller. That way, we have chance of getting a higher value.

This is similar to Three Pointers question in InterviewBit Two pointers question.

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
