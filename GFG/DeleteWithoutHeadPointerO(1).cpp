/* Copy the next node and delete the next node */

void deleteNode(Node *node)
{
   if(node->next == NULL)
   {
       node = NULL;
   }
   node->data = node->next->data;
   node->next = node->next->next;
}
