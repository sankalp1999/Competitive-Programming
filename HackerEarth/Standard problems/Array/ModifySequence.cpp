/*
Suppose we have a sequence of non-negative integers, Namely a_1, a_2, ... ,a_n. At each time we can 
choose one term a_i with 0 < i < n and we subtract 1 from both a_i and a_i+1. 
We wonder whether we can 
get a sequence of all zeros after several operations.
Input
The first line of test case is a number N. (0 < N <= 10000) The next line is N non-negative integers, 0 <= a_i <= 109
*/




#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i] == 0)
            continue;
        int curr = min(v[i], v[i+1]);
        v[i] -= curr;
        v[i+1] -= curr;
    }
    for(int i : v)
    {
        if(i > 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
