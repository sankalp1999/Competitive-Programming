/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    ListNode *slow, *fast;
    slow = head;
    fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            ListNode* entry = head;
            while(entry != fast)
            {
                fast = fast->next;
                entry = entry->next;
            }
            return entry;
        }
        
    }
   
    return NULL;
    
}
