/*
https://www.hackerrank.com/contests/codentine/challenges/rams-note/submissions/code/1325177181
This is the first i coded something this hard completely myself
*/

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,string>> res2;
vector<string> res;
unordered_set<int> counter;
 void helper(string& s, unordered_set<string>& dict,int i, string& prefix, int count)
    {
        if(i >= s.size())
        {
            counter.insert(count);
            res2.push_back({count,prefix.substr(1)});
            res.push_back(prefix.substr(1));
            return ;
        }
        string temp = "";
        for(int pos = i; i < s.size(); i++)
        {
            temp.push_back(s[i]);
            // temp = s.substr(i, pos);
            if(dict.find(temp) != dict.end())
            {
                string prev = prefix;
                prefix = prefix + " " + temp;
                helper(s, dict, i + 1, prefix, count + 1);
                prefix = prev;

            }
        }
    }


int main() {

    string word;
    cin >> word;
    int n;
    cin >> n;
    unordered_set<string> dict;

    while(n--)
    {
        string temp;
        cin >> temp;
        dict.insert(temp);
    }
    string prefix = "";
    helper(word, dict, 0, prefix, 0);
    if(counter.size() == 0)
    {
        cout << "[]" << endl;
        return 0;
    }
  
    
    if(counter.size() > 1)
    {
        sort(res2.begin(), res2.end());
        int countword =0;
        int i = 0;
        int j = 0;
        while(countword != (int)res2.size())
        {
      
       
            while(j  + 1< res2.size() && res2[j].first == res2[j+1].first )j++;

            for(int k = j; k >= i ; k--)
            {
                cout << res2[k].second << endl;
                countword++;
            }
            i = j + 1;
            j++;

        }
        
        return 0;
    }
    // if size == 1
    sort(res.begin(), res.end());
    for(int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << endl;
    }
    return 0;
}
