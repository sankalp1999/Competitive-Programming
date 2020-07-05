class Solution {
    public:
    // If the matching bracket does not match, for e.g if A[i] = ] , then s.top() should be [ 
    // In other words, it should be the correct opening bracket.
    
        bool isValid(string s) {
            stack<char> st;
            map<char, char> matchingBracket; 
            matchingBracket['{'] = '}';
            matchingBracket['['] = ']';
            matchingBracket['('] = ')';
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    st.push(s[i]);
                } else if (st.empty() || matchingBracket[st.top()] != s[i]) {
                    return false;
                } else {
                    st.pop();
                }
            }
            return st.empty();
        }
};
