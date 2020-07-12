int Solution::strStr(const string longer, const string smaller) {

    if(longer.size() == 0 || smaller.size() == 0)return false;
    int index =-1;
    for(int i = 0; i < longer.size(); i++)
    {
        
        if(smaller[0] == longer[i])
        {
            index = i;
            int flag = 0;
            int j = 0;
            while(j < smaller.size())
            {
                if(i < longer.size() && smaller[j] == longer[i])
                {
                    i++; j++;
                }
                else
                {
                    index = -1;
                    i -= j;
                    break;
                }
            }
            if(j == smaller.size())return index;
            
        }
    }
    return index;
    
    
}
