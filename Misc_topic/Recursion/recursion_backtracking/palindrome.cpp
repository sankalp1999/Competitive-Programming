#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string s)
{
    if ( s.length() <= 1 ) // empty string is the smallest string
        return true;
        // then repeat same in the substring
    return s[0] == s[s.length() - 1] && IsPalindrome(s.substr(1, s.length() - 2));
}

int main()
{
    bool y =  IsPalindrome("racecar");
    cout << y << endl;
}