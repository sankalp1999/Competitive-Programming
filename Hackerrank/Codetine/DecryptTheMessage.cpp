#include <bits/stdc++.h>
using namespace std;


long long int min_num = 10000000;

void decrypt(unordered_set<string>& myset, string& s, int begin, long long int level)
{
    
    if(begin >= s.size())
    {
        min_num = min(min_num, level - 1);

        return;
    }
    string temp = "";
    for(int i = begin; i < s.size(); i++)
    {
        temp += s[i]; // All Combinations should be forward direction.  No swapping needed as we are not generating permutations.
        
        if(myset.find(temp) != myset.end())
        {
            decrypt(myset, s, i + 1, level + 1 ); // Try all combinations and record the minimum level
        }  
    }
}


int main() {
    
    int t;
    cin >> t;
    while(t--)
    {

        string s;
        cin >> s;
        int n;
        cin >> n;
        unordered_set<string> myset;
        while(n--)
        {
            string temp;
            cin >> temp;
            myset.insert(temp);

        }

        int count = 0;
       long long int level = 0;
        string prefix = "";
      decrypt(myset , s, 0, level);
        
       if(min_num != 10000000 )
       {
            cout << min_num << endl;
       }
       else
        cout << "IMPOSSIBLE" << endl;
       min_num = 10000000;
       
    }
    
    return 0;     
}
   
