/*
Point in max overlapping intervals
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<pair<int,char>> v;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a,'A'});
        v.push_back({b,'B'});
    }
    sort(v.begin(), v.end());
    int max1 = 0;
    int count = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].second == 'A')count++;
        else if(v[i].second == 'B')count--;
        max1 = max(max1, count);
    }
    cout << max1 << endl;
    return 0;
}
