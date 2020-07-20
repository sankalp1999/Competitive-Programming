int Solution::solve(string start, string end, vector<string> &C) {
    unordered_set<string> s;
    
    for(string word : C)
    {
        s.insert(word); // Add all the words in a set
    }
    
    if(s.find(end) == s.end())return 0;
    
    queue<string> q;
    q.push(start); // We are going to do a BFS
    int count = 0;
    
    while(!q.empty())
    {
        int currsize = q.size(); // Level order 
        count++;
        while(currsize--)
        {
            string word = q.front();
            q.pop();
            
            for(int j = 0; j < word.size(); j++)
            {
                string temp = word; // Select the word
                for(char c = 'a'; c <= 'z'; c++) // Grap a letter and try all combinattons
                // This way, we can select the word which is only one letter away from set
                {
                    temp[j] = c;
                    if(s.find(temp) != s.end())
                    {
                        if(temp == end)return count + 1;
                        s.erase(temp); // If word found, remove from set as a means
                        // to mark visited and not use again.
                        q.push(temp);
                    }
                }
            }
        }
    }
    return count;
}
