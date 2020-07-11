

/* The main idea is to use a sliding window and a hashmap.
Keep track of the number of elements using the unordered_map.
If it is not there in map, that means we got a distinct element, 
So, we increase the count variable.

Now, when window size is reached, we have just slide by 1.
So, now we increment left and remove the A[left] from the window. Now, if it was a distinct element,
then after deleting it, it's count in the map would be 0.
So, we remove it from the hashmap.

This is a common pattern in map related questions.

*/


vector<int> Solution::dNums(vector<int> &A, int B) {
    
    unordered_map<int,int> m;
    int left = 0;
    int right = 0;
    int count = 0;
    vector<int> v ;
    for(right = 0 ; right < A.size(); right++)
    {
        if(m.find(A[right]) == m.end())
        {
            m[A[right]]++;
            count++; // new distinct element
        }
        else
        {
            m[A[right]]++;
        }
        if(right - left + 1 == B)
        {
            v.push_back(count);
            if( --m[A[left]]  == 0 ) // means a distinct element got removed.
            {    
                m.erase(A[left]); // Remove it from the map
                count--;
            }
            left++;
        }
    }
    return v;
    
}
