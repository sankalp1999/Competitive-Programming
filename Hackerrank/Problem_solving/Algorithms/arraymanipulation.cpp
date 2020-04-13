#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    vector<int> v2;
	int m2 =m;
	while(m2--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({a,b});
		v2.push_back(c);
		
	}
	int count[v.size()] = {0};
	int count2[v.size()] = {0};
	for(int i = 0; i < m; i++)
	{	count[i] = 0;
		for(int j = 0; j < m; j++)
		{
			if(v[i].first >= v[j].first && v[i].first <= v[j].second)
			{
				count[i]++;
			}
			else if(v[i].second >= v[j].first && v[i].second <= v[j].second)
			{
				count2[i]++;
			}

		}
	}

    int idx = distance(count, max_element(count, count + m));
    int idx2 = distance(count2, max_element(count2, count2 + m));
    int max1 = max(count[idx], count[idx2]);
    int idx3 = 0;
    for(int i : count )
    {
        cout << i << " ";
    }
    cout << "second " << endl;
    for (int i : count2)
    {
        cout << i << " ";
    }
    if(max1 == count[idx])
    {
        idx3 = idx;
    }
    else
    {
        idx3 = idx2;
    }
    idx3++;
    // cout << idx3 << endl;
    int sum1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(idx3 == v[i].first)
        {
            sum1 += v2[i];
        }
        else if(idx3 == v[i].second)
        {
            sum1 += v2[i];
        }
        else if(idx3 >= v[i].first && idx3 <= v[i].second )
        {
            sum1 += v2[i];
        }
    }
    cout << sum1 << endl;

    return 0;
}