/*
whenever you encounter, /.. pop()
since it means going back by one directory
If you encounter /abc/, then push 'abc'
Finally, in the end, one is required to reverse the contents of the stack.
One does that by reversing each string before adding to result string since when we 
reverse them to bring in proper order, individual strings get reversed.
*/
string Solution::simplifyPath(string A) {
    stack<string> s;
    int i  = 0;
    while(i < A.size())
    {
        if(A[i] == '/')
        {
            i++;
            int count = 0 ;
            string p = "";
            while(A[i] != '/' && i < A.size())
            {
                if(A[i] == '.')count++;
                else if(A[i] != '.')
                {
                    p += A[i];
                }
                i++;
            }
            if(count == 2 && !s.empty())
            {
                s.pop();
            }
            else if(p.size() >= 1)
            {
                    s.push(p);
            }
        }
    }
    if(s.empty())return "/";
    string res = "";
    while(!s.empty())
    {
        string temp = s.top();
        reverse(temp.begin(), temp.end());
        res += temp;
        res += "/";
        s.pop();
    }
    reverse(res.begin(), res.end());
    
    return res;
    
}
