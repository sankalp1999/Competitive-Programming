/*
Count the frequency using a hashmap and then store all 
the elements in the maxheap. Since, we want the 
ones with the higher frequency first, we use a max heap.
Make sure that the frequency is the first quantity 
in the pair.
*/


/*
The first step is to build a hash map element -> its frequency. In Java, we use the data structure HashMap. Python provides dictionary subclass Counter to initialize the hash map we need directly from the input array.
This step takes \mathcal{O}(N)O(N) time where N is a number of elements in the list.

The second step is to build a heap of size k using N elements. To add the first k elements takes a linear time 
\mathcal{O}(k)O(k) in the average case, and \mathcal{O}(\log 1 + \log 2 + ... + \log k) = \mathcal{O}(log k!) = \mathcal{O}
(k \log k)O(log1+log2+...+logk)=O(logk!)=O(klogk) in the worst case. It's equivalent to heapify implementation in Python. 
After the first k elements we start to push and pop at each step, N - k steps in total. The time complexity of heap push/pop is \mathcal{O}(\log k)O(logk) and 
we do it N - k times that means \mathcal{O}((N - k)\log k)O((N−k)logk) time complexity. 
Adding both parts up, we get \mathcal{O}(N \log k)O(Nlogk) time complexity for the second step.

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
