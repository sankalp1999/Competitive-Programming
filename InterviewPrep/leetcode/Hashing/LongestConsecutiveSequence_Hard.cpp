
/*
The main idea is that if check for both 1 greater and 1 lesser element,
then we are double contributing. ( I was doing this earlier)

Golden points
We only attempt to build sequences from numbers that are not already part of a longer sequence.
This is accomplished by first ensuring that the number that would immediately precede the current number in a 
sequence is not present, as that number would necessarily be part of a longer sequence.

1. First, we remove all the duplicates from the array. We do this using the unordered_set.
2. Now, as we traverse, [100,200,1,3,2,4] suppose, we come across 1, then we search for 2, if we find 2, then we search for 3 and then we 
   search for 4. Search is O(1) since we are using unordered_set.
3. Another detail is that while traversing if there is a smaller element, then we skip that and continue because
   we will have it in our streak or sequence later on when we search from a smaller element.
4. If still not understood, check this awesome video     // https://www.youtube.com/watch?v=xdMyL--dOqE


class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        if(nums.size() < 1)return 0;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        int res = 1;
        int count = 1;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            int curr = *it;
            if(s.find(curr-1) != s.end()) // If smaller element available in the hashset, then move on.
            {
                continue;
            }
            int count = 1;
            while(s.find(curr + 1) != s.end()) // Keep checking
            {
                count++;
                curr++;
            }
            res = max(res, count);
        }
        return res ;
    }
};
