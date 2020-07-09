

/* Brute force is really O(n^2) gives TLE

So, the efficient solution is roughly O(n) using an unordered_map<char,int> i.e a hashtable.
We maintain a sliding window of two pointers.
Lets say i = 0 and j = 1. Then, we keep adding the letters to the map and increment j till we find a duplicate.

Now, when we find a duplicate, we update our longest string at this point.

Here comes the main thing, we have to move i pointer till we cross the duplicate character(current character).
Now, we also have to remove the characters from the map<int,char> that come along the way since they no longer
exist in the string.

Finally, change the index of our current character(Which caused the duplication.

*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> myset;
        int curr_max = 1;
        if(s.size() == 0) return 0;
        int i = 0;
        int j = 1;
        myset[s[i]]  = 0;
        while(j < s.size())
        {
            auto it = myset.find(s[j]);
            if(it == myset.end()) // its not there in the hashmap
            {
                myset[s[j]] = j;
                j++; 
            }
            else // its there already, move i pointer
            {
                curr_max = max(curr_max, j - i);
                int jump_index = it->second; // this is guaranteed to be less than j
                for(int k = i; k < jump_index; k++)
                {
                    myset.erase(s[k]);
                }
                i = jump_index + 1;
                myset[s[j]] = j;
                j++;
            }
        }
        curr_max = max(curr_max, j - i);
        return curr_max;
        
    }
};
