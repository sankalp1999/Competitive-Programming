#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long int n, c;
    cin >> n;
    vector<long int> v;
    c = 0;
    while (n--)
    {
        long int t;
        cin >> t;
        if (t == 1)
        {
         //   cout << "yes";
            v.push_back(2);
        }
        else
        {
            {v.push_back(10);}
        }
        
    }
    //int ans = v[0];
    for (long int i = 0; i < v.size()-1;i++)
    {
        if (v[i] != v[i+1])
        {
            c++;
        }
    }
    cout << c+1 ;
    return (0);
}