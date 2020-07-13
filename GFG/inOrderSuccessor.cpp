Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code hereNode * inOrderSuccessor(Node *root, Node *x
    Node* curr;
    curr = x;
    if(curr->right)
    {
        curr = curr->right;
        while(curr->left)curr= curr->left;
        return curr;
    }else
    {
        // Find the deepest node for which the current node is a
        // subtree. I.e current node is in left subtree of this 
        Node* successor = NULL;
        Node* ancestor = root;
        while(ancestor != x)
        {
            if(ancestor->data > x->data)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else
            {
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
