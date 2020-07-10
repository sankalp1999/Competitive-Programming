


/*
This solution is the O(1) space solution. This is a tricky solution and I did not think of this myself.
1. Make duplicates after each node.
2. Assign the random of previous node to the next node.
   i.e curr->next->random = curr->random->next
3. Deattach the list.

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* curr = head;
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr = curr->next;
            curr->next = temp;
            curr = curr->next;
        }

        curr = head;
        while(curr)
        {   
            if(curr->random != NULL)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        Node* newlist = new Node(0);
        Node* dummy;
        dummy = newlist;
        curr = head;
        while(curr)
        {
            Node* next = curr->next->next; // save link to next node
            
            //Extract
            newlist->next = curr->next;
            newlist = newlist->next;
            if(next!=NULL)
            newlist->next  = next->next;
            else
                newlist->next = NULL;
            
            curr->next = next;
            curr = next;
            
        }
        return dummy->next;
        
        
    }
};
