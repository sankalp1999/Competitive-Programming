#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	string s ="";
	int count = 0;
	for(int j = 0; j < n - 1; j++)
	{
		s += "U";
		count++;
	}
	for(int i = 0; i < m- 1; i++)
	{
		s += "L";
		count++;
	}

	for(int i = 0; i < n; i++)
	{
		for(int j =0;j < m-1; j++)
		{
			if(i%2 == 0 ){s+='R';}
			else s+='L';
		}
		if(i!=n-1)
		s+="D";	
		
	}
	cout << s.size()	<< endl;
	cout << s << endl;
	return 0;
}