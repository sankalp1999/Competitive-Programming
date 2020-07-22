#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string s2 = "AB";
	string s3 = "BA";
	size_t found = s.find(s2);
	if(found != std::string::npos)
	{
		found = s.find(s3, found + 2);
		if(found != std::string::npos)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	
	{
		found = s.find(s3);
		if(found != std::string::npos)
		{
			found = s.find(s2, found + 2);
			if(found != std :: string :: npos)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}