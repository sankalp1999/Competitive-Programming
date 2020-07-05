/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int n = 0;
    ListNode* first = A;
    ListNode* prev;
    while(first)
    {
        n++;
        prev = first;
        first = first->next;
    }
    prev->next = A;
    
    ListNode* ptr = A;
    B = B % n;
    int pos = n - B - 1;
    while(pos--)
    {
        ptr = ptr->next;
    }
    ListNode* newhead = ptr->next;
    ptr->next = NULL;
    return newhead;
}
