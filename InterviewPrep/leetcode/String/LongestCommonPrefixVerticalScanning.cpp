class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        
        int n = v.size();
        if(n == 0)return "";
        string prefix = "";
        int k = 0;
        int min_length = INT_MAX;
        for(int i = 0 ; i < n; i++)
        {
            min_length = min(min_length, (int)v[i].size());
        }
        for(int i = 0; i < min_length; i++)
        {
            char c = v[0][i];
            int flag = 0;
            for(int j = 1; j < n; j++)
            {
                if(c == v[j][i])
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
            else
            {
                prefix += c;
            }
        }
        return prefix;
    }
};
