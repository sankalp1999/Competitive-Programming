#include <bits/stdc++.h>
using namespace std;


int main() {
    
    
    int n;
    cin >> n;
    int temp = n;
    while(temp)
    {
        int r = temp%10;
        temp = temp/10;
       if(r != 3 && r != 8)
       {
           cout << -1 << endl;
           return 0;
       }
    }
    queue<string> q;
    q.push("3");
    q.push("8");
    vector<long long int> v;
    unordered_set<string> myset;
    myset.insert("3");
    myset.insert("8");
    while(!q.empty())
    {
        string top = q.front();
        q.pop();
        v.push_back(stoi(top));
        if(top.size() >= 9)break;
        
        if(myset.find(top + '3') == myset.end())
        {
            q.push(top + '3');
            myset.insert(top + '3');
        }
        if(myset.find(top + '8') == myset.end())
        {
            q.push(top + '8');
            myset.insert(top + '8');
        }
    }
    sort(v.begin(), v.end());
    cout << distance(v.begin(), lower_bound(v.begin(), v.end(), n)) + 1 << endl;
    
    return 0;
}
