#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int k; 
		cin >> k;
		string s;
		cin >> s;
		int flag = 0;
		int count = 0;
		int max1 = -1;
		for(int i =1 ; i < k ; i++)
		{
			if(s[i] == 'P' && s[i-1] == 'A' )
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout << 0 << endl;
			continue;}
		else if(flag == 1)
		{	
			for(int i = 0 ; i < k; i++)
			{
				if(s[i] == 'P' && s[i-1] == 'A')
				{
					count =  1;
					i++;
					while(1)
					{
						if(s[i] == 'P')
						{
							count++;
							i++;
						}
						else
						{
							break;
						}
						
					}
					
					max1 = max(max1, count);
				}
			}
		}// end of if
		cout << max1 << endl;
	}
	return 0;
}