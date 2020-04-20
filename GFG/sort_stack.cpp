void SortedStack :: sort()
{
    stack<int> newStack;
    while(!s.empty())
    {
        int temp = s.top(); // pop and store it in a temp variable
        s.pop();
        while(!newStack.empty() && temp > newStack.top()) // Change it to < for ascending order.
        {
            s.push(newStack.top());
            newStack.pop();
        }
        newStack.push(temp); // there is no need to explicitly write a logic to send back the values
                             // We are using the original stack as a temporary stack.
    }
   s.swap(newStack); // Return in the same object, hence swap.
}
