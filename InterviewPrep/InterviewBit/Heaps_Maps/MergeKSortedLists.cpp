

/* My solution */

 typedef pair<int,ListNode*> pil;
 
 
ListNode* Solution::mergeKLists(vector<ListNode*> &v) {
        
        ListNode* start = new ListNode(-1);
        ListNode* curr = start;
        priority_queue<pil,vector<pil>,greater<pil>> pq;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] != NULL)
            {
                pq.push({v[i]->val, v[i]});
            }
        }
        // add k elements
        
        
        //Do not allow to exceed k elements.
        while(!pq.empty())
        {
            auto idx = pq.top();
            pq.pop();
            curr->next = idx.second;
            curr = curr->next;
            if(idx.second->next)
            {
                pq.push({idx.second->next->val, idx.second->next});
            }
        }
        return start->next;
}


/* A slightly better solution from the editorial*/

// It utilizes the comparator to avoid the pair syntax. I don't know much about this type of syntax.


class Solution {
public:

        struct CompareNode {
                bool operator()(ListNode* const & p1, ListNode* const & p2) {
                        // return "true" if "p1" is ordered before "p2", for example:
                        return p1->val > p2->val;
                }
        };
    ListNode *mergeKLists(vector<ListNode *> &lists) {
            ListNode* dummy = new ListNode(0);
            ListNode* tail = dummy;

            priority_queue<ListNode*,vector<ListNode*>,CompareNode> queue;

            for (int i = 0; i < lists.size(); i++) {
                    if (lists[i] != NULL) {
                            queue.push(lists[i]);
                    }
            }

            while (!queue.empty()) {
                    tail->next = queue.top();
                    queue.pop();
                    tail = tail->next;

                    if (tail->next) {
                            queue.push(tail->next);
                    }
            }

            return dummy->next;
    } }; ```







