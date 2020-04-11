vector<int> Solution::plusOne(vector<int> &a) {
    
    int carry  = 0;
    int prevcarry = 0; // to preserve the prev carry
    int  flag =0 ;
    int k = 0; // not needed 
    auto it = a.begin();
    // any leading zeros, erase them
    while(k + 1 < a.size())
    {
        if(a[k] == 0)
        {
            a.erase(it);
        }
        else break;
    }
    reverse(a.begin(), a.end());
    // reversing the digits makes life easier
    // e.g 999
    //      +1 
    //    1000
    // In this case, one needs to append a digit and add whatever
    // carry was generated in the last step
    for(int i = 0; i < a.size(); i++)
    {
            if(i == 0)
            {
                carry  = (a[i] + 1)/10; // Carry
                a[i] = (a[i] + 1)%10;   // 10 % 10 == 0
            } 
            else
            {
                prevcarry = carry;
                carry = (a[i] + carry)/10;
                a[i] = (a[i] + prevcarry)%10; 
                // if 10 is generated, we see only 1
            }
            if(i == a.size() - 1 && carry != 0)
            {
                flag = 1;
            }
    }
    // If we have reached and still carry is not 0
    // then we need to append a digit
    if(flag == 1)
    {
        a.push_back(0);
        a[a.size() - 1] += carry;
    }
    reverse(a.begin(),a.end());

    return a;
    
}
