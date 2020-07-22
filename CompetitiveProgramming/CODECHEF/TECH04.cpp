#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long int l;
    cin >> l;
    while(l--)
    {
    string s1, s2;
    cin >> s1 >> s2; 
    if (s1.size() == s2.size())
        {
        vector<int> freq(26);
        for(char ch : s1)
        {
            freq[ch - 'a'] += 1;
        }
        vector<int> freq2(26);
        for(char ch : s2)
            {
            freq2[ch - 'a'] += 1;
            }
        bool result = std::equal(freq.begin(), freq.end(), freq2.begin());    
        if (result)
            {
            cout << "YES\n";
            }
        else{
            cout << "NO\n";
           
            }
        }
        else 
        {
            cout << "NO\n";
        }
        }
     return (0);
}