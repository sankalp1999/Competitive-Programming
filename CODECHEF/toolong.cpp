#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for (i = 0; i < n;i++)
    {
        string s;

        getline(cin, s);
        if (s.size() <= 10)
        {
            cout << s << endl;
        }
        else if (s.size() > 10)
        {
            string s2 = "";
            string s3 = s[0] + to_string(s.size()-2) + s[s.size() - 1];
            cout << s3 << endl;
        }
        }
        return (0);
}