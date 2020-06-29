/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
    // first we need to find the size of the list
    ListNode* head = A;
    int n = 0;
    ListNode* prev = A;    
    
    // Calculate the length
    while(head != NULL)
    {
        n++;
        head = head -> next;
    }
    
    // Remove the first node
    if(B > n)
    {
        A = A->next;
        return A;
    }
    
    // Remove the first element since it is the last element from the end
    if(B == n)
    {
        return A->next;
    }
    
    // nth node from end of list is n - B from start
    int pos = n - B - 1 ; // reach just one position back from it
    head = A;
    if(B == 1) // thats the last node.
    {
        head = A;
        prev = A;
        while(head->next != NULL)
        {
            prev = head;
            head = head->next;
        }
        prev->next = head->next;
        return A;
    }
    
    while(pos--)
    {
        head = head->next;
    }

    head->next = head->next->next;
    return A;
    
    
}
