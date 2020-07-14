/*
Either we find both the nodes while coming up --> The current node is the LCA
or we find one of the nodes, so we return then above as we are not the LCA. somebody above will be the LCA.
or we didnt find any nodes.
Return null.
*/


Node* lca(Node* root ,int n1 ,int n2 )
{
   if(root == NULL)return NULL;
   if(root->data == n1 || root->data == n2)
   {
       // If you find anyone of them, return them
       return root;
   }
   
   Node* leftSearch  = lca(root->left, n1, n2) ;
   Node* rightSearch = lca(root->right, n1, n2);
   
   if(leftSearch == NULL)return rightSearch; // I am not the LCA but upper one could be
   if(rightSearch == NULL)return leftSearch;
   
   if(leftSearch && rightSearch)return root;
   // this ought to be the answer since we found both the nodes below
   // and we are the deepest since recursion  bottom to up 
   
   
}
