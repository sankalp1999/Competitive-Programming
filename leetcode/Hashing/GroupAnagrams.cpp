/*
The idea is that anagrams are same when sorted.
for e.g cat tac
sort them and you will get 
        act act
So, the sorted version of the word acts as the key.
Using a unordered_map where key is string and value is vector of strings, we can easily group
the anagrams. 

Time complexity: O(n * k * log(k)) where k is the length of the longest string. 
Since we are sorting all the strings.

Space complexity : O( N * K) for storing the strings in the vector.
*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> m;
        vector<vector<string>> v;
        for(int i = 0; i < strs.size(); ++i)
        {
            string copyStr = strs[i];
            sort(copyStr.begin(), copyStr.end());
            m[copyStr].push_back(strs[i]);
        }
        
        for(auto it = m.begin(); it != m.end(); it++)
        {
            v.push_back(it->second);
        }
        return v;
        
        
    }
};
