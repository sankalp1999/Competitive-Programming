 /*

We will need to scan the whole string once to see all the characters.
Use a count array and count the characters.
We again traverse the array.
Return the first occurence where count is 1 

*/
 
 int firstUniqChar(string s) {
    int count[26] = {0};
    for(char c : s)
        count[c -'a']++;
    for(int i = 0; i < s.size(); i++)
    {
        if(count[s[i] -'a'] == 1)return i;
    }
        return -1;
    }
};
