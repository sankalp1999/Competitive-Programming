/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
 
 
 /* This solution is the easy solution with O(N) space and time complexity.
 Notable features
 -> We use a mapping from original node to clone node.
 -> We first build the clone list with only next pointers and later using hashmap, we fill the random pointers using m[curr->random]
 */
 
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    
    RandomListNode* d;
    RandomListNode* curr = new RandomListNode(A->label);
    unordered_map<RandomListNode*, RandomListNode*> linker;
    d = curr;
    RandomListNode* ptr = A;
    while(ptr != NULL)
    {
        if(ptr->next)
        curr->next = new RandomListNode(ptr->next->label); 
        linker[ptr] = curr;
        ptr = ptr->next;
        curr = curr->next;
    }
    ptr = A;
    curr = d;
    while(ptr)
    {
        curr->random = linker[ptr->random];
        ptr = ptr->next;
        curr = curr->next;
    }
    
    return d;
    
    
}
