#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	if(s.size() == 1)
	{
		if((s[0]-48)%8 == 0)cout << "YES\n" << s;
		else cout << "NO" << endl;
		return 0;	
		
	}
	if(s.size() == 2)
	{
		int k = stoi(s);
		if((k%8 == 0)){cout << "YES" << endl;}
		else 
		{
			if((k/10)%8 == 0)cout <<"YES\n" << k/10 ;
			
			else if((k%10)%8 ==0)cout << "YES\n" << k%10;
		
			else
			{
				cout << "NO" << endl;
			}
			return 0;
		}
	}
	
	for(int i = 0; i< s.size(); i++)
	{		string s4 = to_string(s[i] - 48) ;
				if(stoi(s4) % 8 == 0)
				{
					cout << "YES" << endl;
					cout << s4 << endl;
					return 0;
				}
		for(int j = i+1; j < s.size(); j++)
		{	
				string s3 = to_string(s[i] - 48) + to_string(s[j] -48) ;
				if(stoi(s3) % 8 == 0)
				{
					cout << "YES" << endl;
					cout << s3 << endl;
					return 0;
				}
			for(int k = j+1; k < s.size(); k++)
			{
					string s2 = to_string(s[i] - 48) + to_string(s[j] -48) + to_string(s[k] -48);

				if(stoi(s2) % 8 == 0)
				{
					cout << "YES" << endl;
					cout << s2 << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}