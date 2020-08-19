#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	while(cin >> s)
	{
		if(s[0] == '0')break;
		int count[26] = {0};
		for(char c : s)
		{
			count[c - 'a' ]++;
		}
		int even = 0;
		int odd =  0;
		
		for(int i = 0; i < 26; i++)
		{
			if(count[i] != 0 && count[i]%2 == 0)
			{
				even++;
			}
			else if(count[i] != 0 && count[i]%2 == 1)
			{
				odd++;
			}
		}
		int len = s.size();
		if(len % 2 )
		{
			if(odd != 1)
			{
				cout << "Impossible" << endl;
				continue;
			}
		}
		else if(len % 2 == 0)
		{
			if(odd > 0)
			{
				cout << "Impossible" << endl;
				continue;
			}
		}
	
		// We can have a valid palindromic permutation. 
		// Since it is either having all the chars as even
		// and odd numbers as odd.
		int i = 0;
		int j = s.size() - 1;
			
		int swapcount = 0;
		while(i < j)
		{
			if(s[i] == s[j])
			{
				i++;
				j--;
			}
			else if(s[i] != s[j])
			{
				int k = j;
				while(s[k] != s[i])k--;
				
				while(k != j)
				{
					swap(s[k], s[k+1]);
					swapcount++;
					k++;
				}
		
			}
		}
		cout << swapcount << endl;
			
	}
	
	
	return 0;
}