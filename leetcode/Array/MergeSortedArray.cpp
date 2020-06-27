
/*
This is a slight variation of the merge procedurein the merge sort algorithm.
A : [ 1,2,3, 0, 0,0 ]
B : [2, 5, 6]
Now, notice that we have to merge it in A only. So, if we start merging from start, 
then how will we keep track of replaced elements? Like we will have to store them somewhere or do something.
That is going to be complicated.

To keep it simple,
we keep i, j, k pointers
k = m + n - 1;
j = n - 1;
i = m - 1;
For this purpose, they have given the length of the arrays also.

So, compare the k pointer value and B array value. B[j] is smaller,
place it in nums[k] and decrement.
Else
Just place the num1s[i] value to nums1[k] position and move the pointers one step behind.

This was a easy and slighly tricky question which reminds me to **Try to Think from scratch**

*/



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int k = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        // start from the end why?????
        while(i >= 0 && j >= 0)
        {
            if(nums2[j] > nums1[i])
            {
                nums1[k--] = nums2[j--];
            }
            else
            {
                nums1[k--] = nums1[i--];
            }
        }
        while( j >= 0) // for the case when the all first array
                      // elements are bigger than the second array elements.
        {
            nums1[k--] = nums2[j--];
        }
        
    }
};
