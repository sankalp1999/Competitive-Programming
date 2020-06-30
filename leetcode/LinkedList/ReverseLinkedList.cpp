


/*
Store the link to the next pointer.
Then, make new link from current to previous. This is the reversing.
Then move the prev pointer by prev = curr
Then move the current pointer by curr = next
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)return head;
        ListNode *curr, *prev, *next;
        prev = NULL;
        next = NULL;
        curr = head;
        while(curr)
        {
            next = curr->next; // store the link
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
        
        
    }
};
