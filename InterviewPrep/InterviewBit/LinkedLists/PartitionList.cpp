/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode* less = new ListNode(0);
    ListNode* equal = new ListNode(0);
    ListNode* less1 = less;
    ListNode* equal1 = equal;
    ListNode* curr = A;
    // curr is always running one step forward so no need to 
    // worry about modification of the list.
    
    // less and equal together are forming new links.
    // Awesome question.
    while(curr)
    {
        if(curr->val < B)
        {
            less->next = curr;
            less = less->next;
        }
        else if( curr->val >= B)
        {
            equal->next = curr;
            equal = equal->next;
        }
        
        if(curr->next == NULL)
        {
            equal->next = NULL;
        }
        curr = curr->next;
    }
    less->next = equal1->next;
    return less1->next;

}
