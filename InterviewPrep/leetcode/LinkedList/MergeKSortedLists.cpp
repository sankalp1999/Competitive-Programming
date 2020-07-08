/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    typedef pair<int, ListNode*> pli;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* start = new ListNode(-1);
        ListNode* curr = start;
        // Now, start is the new list.
        // Since curr took start's reference,
        // curr is manipulating the start list
        priority_queue<pli,vector<pli>,greater<pli>> pq;
        
        // Use heap to keep track of minimum element
        // Keep pair<int,ListNode*>
        // So as to keep track of next node
        // and heap is ordered by the first element of 
        // the priority queue, so keep it first.
        
        for(int i = 0 ;i < lists.size(); i++)
        {
            if(lists[i])
            {
                pq.push({lists[i]->val,lists[i]});
            }
        }
        // Don't let the size of the heap grow more than k
        // That way we will maintain the minimum of the k lists one entry.
        // Since we need to look at atleast k entries to decide 
        // the next node.
        while(!pq.empty())
        {
           {
               auto idx = pq.top();
               pq.pop();
               // cout << idx.first << endl;
               curr->next = idx.second;
               curr = curr->next;
               if(idx.second->next != NULL)
               {
                   pq.push({idx.second->next->val, idx.second->next});
               }
           }
         
        }
        return start->next;
    }
};
