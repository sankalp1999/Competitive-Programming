

/* Solution 1 : Longer list waits for the shorter list to catch up. When, the difference is covered,
we start both of them.
*/

class Solution {
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int a = 0;
       int b = 0;
       ListNode* temp = headA;
        while(temp)
        {
            temp = temp->next;
            a++;
        }
        temp = headB;
        while(temp)
        {
            temp = temp->next;
            b++;
        }
        ListNode* currA = headA;
        ListNode* currB = headB;
        if(b > a)
        {
            int diff = b - a ;
            while(diff--)currB = currB->next;
        }
        else
        {
            int diff = a - b;
            while(diff--)currA = currA->next;
        }
        while(currA && currB)
        {
            if(currA == currB)return currA;
            currA = currA->next;
            currB = currB->next;
        }
        return NULL;
    }
};



// Solution 2

// When shorter list reaches it's end, update it's head to the longer list's head.
//Do the same for the other list.
//Eventually they will catch up the difference and end up at the intersection node.
//Otherwise, both of them will become NULL and eventually exit out of the loop.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* currA = headA;
        ListNode* currB = headB;
        
        while(currA != currB)
        {
            if(currA == NULL)
            {
                currA = headB;
            }
            else
            {
                currA = currA->next;
            }
            if(currB == NULL)
            {
                currB = headA;
            }
            else
                currB = currB->next;
        }
        // If they are equal, then answer will be given.
        // Else currA will be NULL.
        return currA;
    }
};




