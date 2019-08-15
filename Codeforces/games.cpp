#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    vector<int> a;
    cin >> n;
    int count = 0; 
    while (n--)
    {
        int t1, t2;
        cin >> t1 >> t2;
        v.push_back(t1);
        a.push_back(t2) ;
    }
    for (int i = 0; i < v.size();i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (v[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
