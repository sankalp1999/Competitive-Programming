


/* Key points to note

Here the idea is that we are going to have an array like
1 1 2 2 2 3 3 4
Now, if head->val == head->next->val
i.e if current position value is equal to next position value.
then, simply change the next pointer of current for the next to next position.
We do this until the next values are equal.

The difficult thing here is to not index a NULL pointer. So, in outer while loop, we keep
head != NULL check and inside, also we check head->next

*/

ListNode* Solution::deleteDuplicates(ListNode* A) {
        
    // 1 2 3 4 
   if(A->next == NULL || A == NULL)
        return A;
    ListNode* head  = A;
    while(head != NULL)
    {
        while(head->next != NULL && head->val == head->next->val)
        {
            head->next = head->next->next;
        }
        head = head->next;
    }
    return A;
   
}
