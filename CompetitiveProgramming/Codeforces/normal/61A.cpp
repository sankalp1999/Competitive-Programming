#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{   long int i;
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    string s3 = "";
    for(i=0;i<s1.size();i++)
    {
        s3 = s3 + to_string(s1[i] ^ s2[i]);
    }
    cout << s3 << endl;
    return(0);
}