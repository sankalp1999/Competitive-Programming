#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int n, i ;
    cin >> n;
    vector<int> v;
    for (i = 0; i < n;i++)
    {
        int t;
        cin >> t;
        v.push_back(t);

    }
    sort(v.begin(), v.end());
    
    int sum1 = 0;
    int summation = 0 ;
    i = 0;
    int c = 0;
    for (i = v.size() - 1; i >= 0; i--)
    {
         
       sum1 =  accumulate(v.begin(), v.end(), 0);

        if (sum1 >= summation)
        {
            summation = summation + v[i];
            c++;
            v.pop_back();
        }
        else{
            break;
        }
    }
    cout << c;
    return (0);
}