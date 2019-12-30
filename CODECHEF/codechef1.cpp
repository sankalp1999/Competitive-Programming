#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--)
	{
		int n, k ;
		cin >> n >> k ;
		vector<int> v ;
		int flag= 0  ;// checking for -1
		for(int i = 0 ; i < n ; i++)
		{
			int temp ;
			cin >> temp ;
			if(temp == -1)
			{
                flag = 1 ;
			}

			v.push_back(temp);
		}
		if(flag == 0)
		{
            for(int i : v)
            {
                cout << i << " ";
            }
		}
		for(int i = 0 ; i < v.size() - 1;i++)
		{
            left = v[i-1];
            right = v[i+1];
            if(i==0 && right == 1)
            {
                v[i] = 2;
            }
            else
            {
                v[i] = 1 ;
            }

            if(v[i] == -1)
            {
                if(left == 1 && right == 1 )
                {
                    v[i] = 1;
                }
                else if(left == 2 && right == 2)
                {
                    v[i] = 1 ;
                }
            }
		}

		for(int i : v)
		{
		cout << i << " ";
		}

		cout << endl;
	}
	return 0;
}
