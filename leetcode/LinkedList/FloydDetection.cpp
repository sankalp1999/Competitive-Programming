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
    bool hasCycle(ListNode *head) {
      if(head == NULL || head->next == NULL)return false; 
      ListNode* fast = head->next;
      ListNode* slow = head;
      // IF there is no cycle, the fast pointer will reach the end of the lsit
        // If there is a cycle, then eventually the fast and slow pointer will 
        // meet each other.
        
    // Start fast pointer one position ahead so as to accomodate
    // for the n = 2 length linked list
        while(slow!=fast)
      {
          if(fast == NULL || fast->next == NULL)
              return false;
          slow = slow->next;
          fast = fast->next->next;
      }
        return true;
    }
};
