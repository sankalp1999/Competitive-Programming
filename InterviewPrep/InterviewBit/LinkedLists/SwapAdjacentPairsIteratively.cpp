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
 
 // This solution has been taken from https://www.youtube.com/watch?v=bM2kxaTUwGw
 // I figured out the logic but was not able to resolve the test cases.
 
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    
    
        ListNode* d = new ListNode(0); // to solve the head problem.
        ListNode* d1  = d; // We are modifying the list ahead. d1 will help to preserve the head.
        d->next = head; // head
        ListNode *p, *q;
        while(d->next != NULL && d->next->next != NULL)
        {
           p = d->next; // A->B link
           q = d->next->next; B->C link
        
            d->next = q; // A->C, now A-> C
            p->next = q->next;
            q->next = p;
            
            d = p; // reset d to repeat the process 
            
        }
        return d1->next;
    }
};
