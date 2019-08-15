#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int i, j;
    i = 0;
    j = 0;
    int k = 0; 
    for(char i : s2)
    {
        if (i == s1[j])
        {
            j++;

        }
        
    }
    cout << j+1 ;
}