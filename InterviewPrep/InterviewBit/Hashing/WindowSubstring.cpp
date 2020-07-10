string Solution::minWindow(string s, string t) {
    
    vector<int> lc(128,0);
    int left, right;
    left = right = 0;
    for(char c : t)
    {
        lc[c]++;
    }
    int count = 0;
    string window = "";
    int minSize = INT_MAX;
    for(int right = 0; right < s.size(); right++)
    {
        if(--lc[s[right]] >= 0)// THis means that the letter is insde since >= 0 after decrementing
        {
            count++;// increment i.e we found a character
        }
        while(count == t.size())
        {
            if(right - left + 1 < minSize)
            {
                minSize = right - left + 1;
                window = s.substr(left, minSize);
            }
            // Shrink
            if(++lc[s[left]] > 0) // i.e from 0 to 1, then it was a letter 
            {
                count--; // in the window string. Now, removed.
            }
            left++;
        }
    }
    return window;
    
    
}
