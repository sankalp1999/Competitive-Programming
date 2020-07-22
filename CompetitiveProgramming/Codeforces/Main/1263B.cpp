#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >>n;
		int arr[10000] = {0};
		int count = 0 ;
		while(n--)
		{
			string s;
			cin >> s;
			arr[stoi(s)]++;
		}
		for(int i = 0; i < 10000;i++)
		{
			if(arr[i] == 1)continue;
			else {
				int k = 1;
				while(arr[i] > 1)
				{
					
					if(arr[i + k] < 10000 )
					{
						arr[i+k]++;
						arr[i]--;
						count++;
					}
				k++;
				}
			}
		}
		cout << count << endl;
		for(int i = 0 ; i < 10000; i++)
		{
			if(arr[i] > 0)
			{
				if (i < 1000)
				{
					cout << "0" + to_string(i) << endl; 
				}
				else
				{
				cout << i << endl;
					
				}
			}
		}
	
	}
	return 0;
}