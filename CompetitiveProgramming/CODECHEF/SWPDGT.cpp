#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
		char a[100];
		char b[100];
		cin >> a >> b;
		if(strlen(b) < strlen(a))
		{
			swap(a, b);
		}
		if(strlen(a) == 1 && strlen(b) == 1)
		{
				cout << stoi(a) + stoi(b) << endl;
				continue;
			
		}
		if(strlen(a) == 1 && strlen(b) == 2)
		{
			if(a[0] > b[0])
			{
				swap(a[0], b[0]);
			}cout << stoi(a) + stoi(b) << endl;
				continue;
		}

		int a1 = stoi(a);
		int b1 = stoi(b);
		int sum = a1 + b1;

		swap(a[0], b[1]);
		a1 = stoi(a); b1= stoi(b);
		int sum2 = (a1 + b1);
		swap(a[0], b[1]);
		swap(a[1], b[0]);
		a1 = stoi(a); b1= stoi(b);
		int sum3 = a1 + b1;
		vector<int> v;
		v.push_back(sum);
		v.push_back(sum2);
		v.push_back(sum3);
		sort(v.begin(), v.end());
		cout << v[v.size() - 1] << endl;		
	
		
	}
	return 0;
}