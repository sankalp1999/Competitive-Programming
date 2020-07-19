Let's quickly look at a pseudo-code to make the algorithm simple to understand.

➔ function formBst(start, end)

➔      mid = (start + end) / 2

➔      formBst(start, mid - 1)

➔
➔      TreeNode(head.val)

➔      head = head.next

➔      formBst(mid + 1, end)

➔
- Iterate over the linked list to find out it's length. We will make use of two different pointer variables here to mark the beginning and the end of the list. Let's call them start and end with their initial values being 0 and length - 1 respectively.

- Remember, we have to simulate the inorder traversal here. We can find out the middle element by using (start + end) / 2. Note that we don't really find out the middle node of the linked list. We just have a variable telling us the index of the middle element. We simply need this to make recursive calls on the two halves.

- Recurse on the left half by using start, mid - 1 as the starting and ending points.

- The invariance that we maintain in this algorithm is that whenever we are done building the left half of the BST, the head pointer in the linked list will point to the root node or the middle node (which becomes the root). So, we simply use the current value pointed to by head as the root node and progress the head node by once i.e. head = head.next

- We recurse on the right hand side using mid + 1, end as the starting and ending points.

'''

    class Solution {

    public:


    TreeNode* helper(ListNode*& head, int start, int end)
    {
      
      if(start > end)
       
       return NULL;
       
       int mid = (start + end)/2;
       
       //We make the tree in an inorder traversal way
       
       TreeNode* left = helper(head, start , mid - 1);
        
        TreeNode* root = new TreeNode(head->val);
        
        head = head->next; // This is happening globally
        // Since, we made the first node, time to make next
        
        //Time to make the right subtree
        TreeNode* right = helper(head, mid + 1, end);
        
        root->left = left;
        
        root->right = right;
        return root;
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        int len = 0;
        ListNode* curr = head;
        while(curr)
        {
            len++;
            curr = curr->next;
        }
        return helper(head, 0, len - 1);
        
    }
    };


'''
