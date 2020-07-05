/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::t2Sum(TreeNode* A, int B) {
    
   stack<TreeNode*> s1; // Gives next smaller 
   stack<TreeNode*> s2; // Gives next larger
   // Maintain one stack for next smaller
   // One stack for next larger
   TreeNode* curr_smaller = A;
   while(curr_smaller) // Going down left --> pushing smaller ones
   {
       s1.push(curr_smaller);
       curr_smaller=curr_smaller->left;
   }
   
   TreeNode* curr_larger = A;
   while(curr_larger) // Going down right --> pushing the larger ones
   {
       s2.push(curr_larger);
       curr_larger = curr_larger->right;
   }
   int smaller, larger;
   smaller = 0;
   larger = 0;
   while(!s1.empty() && !s2.empty())
   {
       TreeNode* temp1 = s1.top(); // Check the top elements and do the two pointer technique
       TreeNode* temp2 = s2.top(); 
       smaller = temp1->val;
       larger = temp2->val;
       if(temp1 == temp2)return 0; // root == root case, no solution
       if(larger+smaller==B)return 1;
     
       if(smaller+larger<B)
       {
           //We need next smaller element
           s1.pop();
           temp1 = temp1->right; 
            // The left side elements in the right subtree will be the next smaller
            // elements since the root->right elements are larger in a bst
            // so, elements in the left subtree of temp1->right will be 
            // larger than temp1
           while(temp1)
           {
               s1.push(temp1);
               temp1 = temp1->left; // Go down filling the smaller elements
           }
       }
      else
       {
           // We need a less larger element
           s2.pop();
           temp2 = temp2->left;
           // temp2->left is smaller than temp2 but all elements on
           // right subtree of temp2->left are going to be lareger
           // than temp2
           // So they are the next larger elements
           while(temp2)
           {
               s2.push(temp2);
               temp2 = temp2->right;
           }
       }
     
   }
   return 0;
}
