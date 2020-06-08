class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
        
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i < n; i++)
        {
            mp[nums[i]]++;
        }
        int max_count = 0;
        int ele;
        for(auto i : mp)
        {
            if(i.second > max_count)
            {
                max_count = i.second;
                ele = i.first;
            }
        }
        return ele;
    }
};
