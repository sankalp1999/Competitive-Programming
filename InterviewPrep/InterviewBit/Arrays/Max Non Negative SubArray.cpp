vector<int> Solution::maxset(vector<int> &a) {
    long long int sum = 0;
    long long int pos = 0;
    long long int len = 0;
    long long int maxsum = 0;    
    long long int minpos = 0;    
    long long int maxlen = 0;    
    bool flag = false;
    for(int i = 0; i < a.size(); i++)
    {   
        long long int num = (long long )a[i];
        
         if(num >= 0)
        {
            sum = sum + (long long )num;
            if(flag == false) 
            {
                pos = i;
                flag = true;
            }
            len++;
        }
        if(num < 0 || i == a.size() - 1)
        {  
            if(sum > maxsum)
            {
                maxsum = sum;
                minpos = pos;
            
                maxlen = len;
           
                
            }
            if(sum == maxsum)
            {        
                if(sum == 0)
                {   if(pos < minpos)
                    minpos = pos;
                }
                if(len > maxlen)maxlen = len;
                
                else if(len == maxlen && pos < minpos)
                {
                    minpos = pos;
                }
            }
            sum = 0;
            pos = 0;
            len = 0;
            flag = false;
        }   
        
    }
    vector<int> p;
    for(int i = minpos  ; i < minpos + maxlen ; i++)
    {
        p.push_back(a[i]);
    }
    return p;
}
