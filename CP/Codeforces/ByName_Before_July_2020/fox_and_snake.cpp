#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	int toggle = 0;
	for(int i = 0; i < n; i++)
	{
		if(i%2==0)
		{
			for(int i = 0; i < m ; i++)
			{
				cout << "#";
			}
			cout << endl;
		}
		else
		{
			if(toggle == 0)
			{
				for(int i = 0; i < m - 1 ; i++)
			{
				cout << ".";
			}
			cout << "#";
			toggle = 1;
				
			}
			else if(toggle == 1)
			{
			cout << "#";
					for(int i = 0; i < m - 1 ; i++)
			{
				cout << ".";
			}
			toggle = 0;
			}
			cout << endl;
			
			
		}
	}
	return 0;
}
