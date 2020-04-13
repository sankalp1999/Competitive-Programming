/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
        ListNode *first, *curr, *prev;
        first = A;
        curr = first->next;
        int leng = 0;
        ListNode *lc = A;
        // Go till the mid of the linkedlist
        while(curr!=NULL)
        {
            prev = first;
            first = first->next;
            curr = curr->next;
            if(curr!=NULL)curr = curr->next;
        }
        // 1->2->3->2->1 
        // Reverse from the middle
        // 1->2 and 1->2->3
        // for that to happen
        // prev = NULL
        
        prev = NULL;
        while(first!=NULL)
        {
            curr = first;
            first = first->next;
            curr->next = prev;
            prev = curr;
        }
        // Now, just match
        // If odd length, last one will get ignored automatically
        // since we are checking both and one of them will 
        // min(A, B) where smaller length is even
        ListNode* mid = curr;   
        first = A;
   
        while(mid != NULL && first != NULL)
        {
            if(mid->val == first->val)
            {
                mid = mid->next;
                first = first->next;
            }
            else
            {
                return 0;
            }
        }
        return 1;
            
        
}

