vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    //sorted form of string is key
    // Relative postiion?
    
    unordered_map<string, vector<int>> m;
    for(int i = 0;i < A.size(); i++)
    {
        string t = A[i];
        sort(t.begin(), t.end());
        m[t].push_back(i+1);
    }
    vector<vector<int>> v;
    for(auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back(it->second);
    }
    return v;
}
