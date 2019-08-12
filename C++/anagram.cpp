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
    string s1, s2;s2.
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
            freq[ch - 'a'] += 1;
            }
        if (freq == freq2)
            {
            cout << "YES";
            }
        else{
            cout << "NO";
            }
        }
        else 
        {
            cout << "NO";
        }
        }
     return (0);
}