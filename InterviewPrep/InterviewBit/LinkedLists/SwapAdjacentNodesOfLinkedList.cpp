/**

 */
 
 
 

ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* head = A;
    if(head == NULL || head->next == NULL)
        {return head;}
        ListNode* r = head->next->next; // first element points to third element
        ListNode* newhead = head->next; // second element points to first element 
        head->next->next = head;
        head->next = swapPairs(r);
        return newhead;
}
