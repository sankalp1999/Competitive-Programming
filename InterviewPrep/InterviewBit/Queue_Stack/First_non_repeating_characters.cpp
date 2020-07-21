/*  
Explanation
Idea is to store the frequency of occurence of characters.
If A[i] is not equal to q.front(), then add that in the string
But before that we need to ensure that 
the character that is at the front of the queue, if that character 
has been already repeated in the input string while traversing,
then its frequency will be > 1. 

So we need to delete these characters from the queue.
It did not strike me first until I got couple of WAs.

Problem is easy otherwise.

*/

string Solution::solve(string A) {
    
    queue<char> q;
    vector<int> repeated(26, 0);
    
    string B = "";
    B += A[0];
    
    q.push(A[0]);
    repeated[A[0] - 'a']++;
    
    for(int i = 1 ; i < A.size(); ++i)
    {
        q.push(A[i]);
        repeated[A[i]-'a']++;

        while(!q.empty() && repeated[q.front()-'a']>1)
        {
            q.pop(); 
        }

        if(q.empty())
        {
            B += "#";
        }
        else
        {
            B += q.front();
        }
    }
    return B;
}

/* Editorial solution is much better than mine */
string Solution::solve(string A) {
    unordered_map<char, int> mp;
    queue<char> q;
    string ans;
    for (auto c : A)
    {
        mp[c]++;
        q.push(c);
        while (!q.empty() && mp[q.front()] > 1)   q.pop();
        if (!q.empty())                         ans.push_back(q.front());
        else                                    ans.push_back('#');
    }
    return ans;
}
