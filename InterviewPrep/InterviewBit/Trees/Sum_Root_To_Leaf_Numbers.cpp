
 /*
 Think recursion.
Carrying along the number formed from root to the node 
when calling the function for node, will make stuff easier for you. 
When you encounter a new digit,  you can append it to existing one 
as newNum = oldNum * 10 + newDigit.

Also, use a temp variable to store the state of the number 
before the recursive calls. I got this idea from the solution discussion.

Earlier, i was using string but stoi function in C++ gives error for long integers.
*/
 
 
 void helper(TreeNode* head, int& num , int& sum)
 {
     if(head != NULL && !head->left && !head->right)
     {
        int temp2 = num;
        num = (((num%1003)*(10))%1003 + (head->val)%1003)%1003;
        sum  = (sum%1003 + num%1003)%1003;
        num = temp2;
     }
     if(head)
     {
        int temp = num; 
        num = (((num%1003)*(10))%1003 + (head->val)%1003)%1003;
        helper(head->left, num, sum);
        helper(head->right, num, sum);
        num = temp;
     }
 }
 
int Solution::sumNumbers(TreeNode* head) {
    
    string s;
    int sum = 0;
    int num = 0;
    helper(head, num, sum);
    return sum;
}
