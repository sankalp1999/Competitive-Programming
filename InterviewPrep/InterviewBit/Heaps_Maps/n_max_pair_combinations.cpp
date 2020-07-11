typedef pair<int,int> pii;
 
vector<int> Solution::solve(vector<int> &nums1, vector<int> &nums2) {
    
    auto comp = [&nums1, &nums2](pair<int, int> a, pair<int, int> b) {
    return nums1[a.first] + nums2[a.second] < nums1[b.first] + nums2[b.second];};
    priority_queue<pii, vector<pii>, decltype(comp)> maxheap(comp);
    int n = nums1.size();
    sort(nums1.begin(), nums1.end(), greater<int>());
    sort(nums2.begin(), nums2.end(), greater<int>());
    
    // unordered_set<pair<int,int>> s;
    int i = 0;
    int j = 0;
    maxheap.push({i, j});
    vector<int> v;
    int k = n;
    while(!maxheap.empty() && k-- )
    {
        
        auto idx = maxheap.top();
        maxheap.pop();
        v.push_back(nums1[idx.first] + nums2[idx.second]);
        if(idx.first + 1 < n && idx.second < n)
        {
            maxheap.push({idx.first+1, idx.second});
        }
        if( idx.first == 0 && idx.second + 1 < n)
        {
            maxheap.push({idx.first, idx.second + 1});
        }
    //   n--;
    }
    return v;
    
        
}
