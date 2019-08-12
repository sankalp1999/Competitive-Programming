#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b ;
    vector<int> v;
    cin >> a >> b;
    int count = 0;
    while (a--)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
        for (int i = 0; i < v.size()-1 ; i++)
        {
            //cout << count << " ";
            int sum = v[i] + v[i + 1];
            if (sum >= b)
            {
                continue;
            }
            else
            {
                count = count + b - v[i] - v[i+1] ;
                v[i + 1] = b - v[i];
            }
        }
        //cout << endl;
        cout << count << endl;
        for(int i : v)
        {
            cout << i << " ";
        }
}
