vector<int> Solution::lszero(vector<int> &A) {
    
    unordered_map<int,int> m;
    long long int running_sum = 0;
    int pos1, pos2;
    m[0] = -1;
    int max_diff = -1;
    pos1 = 0;
    pos2 = 0;
    int flag = 0;
    for(int i = 0; i < A.size(); i++){
        running_sum = running_sum + (long long)A[i];
        if(m.find(running_sum) == m.end())
        {
            m[running_sum] = i;
        }
        else
        {   flag = 1;
            int left = m[running_sum] + 1;
            int right = i;
            if(right - left > max_diff )
            {
                max_diff = right - left;
                pos1 = left;
                pos2 = right;
            }
        }
    }
    
    vector<int> v;
    if(flag == 0)return v;
    
    for(int i = pos1; i <= pos2; i++)
    {
        v.push_back(A[i]);
    }
    return v;
}
