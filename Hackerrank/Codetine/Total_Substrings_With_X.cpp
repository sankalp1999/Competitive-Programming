#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Utkarsh and his friend just learned about the string data type.
His friend gave him a string that is made up of only 2 characters - 'x' & 'y'.
His friend asked him to find out the number of substrings in this string that contain only 'x'.
Since Utkarsh just learned about strings, you have to solve this problem.
Since the answer may be too large, return it modulo 10^9 + 7.
*/

int main() {
    string s;
    cin >> s;
    long long int sum = 0;
    int mod = 1e9 + 7;
    for(int i = 0; i < (int)s.size(); i++)
    {
        if(s[i] == 'x')
        {
            int k = i;
            while(s[k] == 'x')k++;
            long long int n = k - i;
            long long int calc = n * (n + 1)/2;
            sum += calc;
            i = k;
        }
    }
    cout << sum << endl;
    return 0;
}
