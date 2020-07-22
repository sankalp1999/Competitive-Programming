#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	string b;
	cin >> a ;
	cin >> b;
	 if(a.size() > b.size())
	 {
	 	cout << a.size();
	 }
	 else if(a.size() < b.size())
	 {
	 	cout << b.size();
	 }
	 else
	 {
		if(a == b)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << a.size() ;
		}
	 }
	
	return 0;
}