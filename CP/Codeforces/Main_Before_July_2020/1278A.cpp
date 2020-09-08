#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		int count[52] = {0};

		for(int i = 0; i < a.size() ;i++)
		{
			count[(char)a[i] - 'a']++;
		}
		if(b.size() < a.size())
		{
			cout << "NO" << endl;
			continue;
		}
		int flag = 0;
		int p =0;
		for(int i = 0 ; i < b.size(); i++)
		{	int count2[52] = {0};
			flag = 0;
			for(int j = 0 ; j < a.size() && i+j < b.size(); j++)
			{
				count2[(char)b[i + j] - 'a']++;
			}
			for(int k = 0 ; k < 52; k++)
			{
				if(count2[k] == count[k])
				{
					continue;
				}
				else{
					flag = 1;
					
				}}
				if(flag == 0)
				{
					cout << "YES" << endl;
					p = 1;
					break;
				}
			
		}
		if(p == 0)
		{cout << "NO"  << endl;}
	}
	return 0;
}