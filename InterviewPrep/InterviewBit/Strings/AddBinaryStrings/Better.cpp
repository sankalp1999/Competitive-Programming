string Solution::addBinary(string A, string B) {
    if(A.size() < B.size()){
        A.swap(B);
    }// assuming A is bigger in size
    reverse(B.begin(), B.end());
    while(B.size() < A.size())
    {
        B.push_back('0');
    }
    reverse(B.begin(), B.end());
    string res = "";
    int carry = 0;
    for(int i = A.size() - 1; i >= 0; i--)
    {
        int temp = (A[i] - '0') + (B[i] - '0') + carry;
        carry = temp/2;
        res += to_string(temp%2);
    }
    if(carry) res += '1';
    reverse(res.begin(), res.end());
    return res;
}
