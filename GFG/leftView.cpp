
/* Variation of level order traversal
In this question, just print the first number entering the queue 
in the level order traversal.
This can be easily maintaining the size of the queue since the 
number of elements of the queue can tell us the number of elements 
in the next level.

*/


void leftView(Node *root)
{
   queue<Node*> q;
   if(root == NULL)
   {
       return;
   }
   q.push(root);
   while(!q.empty())
   {
       int count = q.size();
       int flag = 0;
       while(count--)
       {
            Node* temp = q.front();
            q.pop();
            if(flag == 0)
            {
                cout << temp->data << " ";
                flag = 1;
            }
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
       }
   }
   
}
