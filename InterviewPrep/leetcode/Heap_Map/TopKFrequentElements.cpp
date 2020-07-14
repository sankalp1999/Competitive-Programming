/*
Count the frequency using a hashmap and then store all 
the elements in the maxheap. Since, we want the 
ones with the higher frequency first, we use a max heap.
Make sure that the frequency is the first quantity 
in the pair.
*/
class Solution {
public:
    typedef pair<int,int> pii;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        unordered_map<int,int> freq;
        
        for(int i = 0;i < nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = freq.find(nums[i]);
            if(it != freq.end())
            {
                 pq.push({it->second, it->first});
                 freq.erase(it->first);
            }
            if(pq.size() > k)
            {
                    pq.pop();
            }
        }
        while(!pq.empty())
        {
                auto idx = pq.top();
                pq.pop();
                v.push_back(idx.second);
        }
        return v;
        
    }
};
};
