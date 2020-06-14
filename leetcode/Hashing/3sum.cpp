class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int> > ans;
        int i, j, k, n = num.size();
        sort(num.begin(), num.begin() + n);
        for (i = 0; i < n; i++){
            if (i > 0 && num[i] == num[i - 1]) continue;
            k = n - 1;
            j = i + 1;
            while (j < k){
                if (num[i] + num[j] + num[k] > 0) k--;
                else if (num[i] + num[j] + num[k] < 0) j++;
                else{
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(num[k]);
                    ans.push_back(tmp);
                    while (j < k && num[k] == num[k - 1]) k--;
                    while (j < k && num[j] == num[j + 1]) j++;
                    k--; j++;
                }
            }
        }
        return ans;
    }
};
