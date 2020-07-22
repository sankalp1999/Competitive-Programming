#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    string test;
    cin >> test;
    vector<char> v;
    v.push_back('a');
    for (char x : test)
    {
        v.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < v.size()  -1  ; i++)
    {
        long long int a = abs(v[i] - v[i+1]);
        long long int b = abs(26 - abs(v[i] - v[i+1]));
        sum += a < b ? a : b;
       
    }
    cout << sum; 
}