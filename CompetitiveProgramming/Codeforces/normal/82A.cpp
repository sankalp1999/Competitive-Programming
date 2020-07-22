#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 1;
	int k;
	int ans;
	cin >> k;
	k = k -1;

	while(k > 4)
	{	
		k = (k -5)/2;
	}
	ans = k;
	

	if(ans == 0)
	{
		cout << "Sheldon" << endl;
	}
	else if(ans == 1)
	{
		cout << "Leonard" << endl;
	}
	else if(ans == 2)
	{
		cout << "Penny" << endl;
	}
	else if(ans == 3)
	{
		cout << "Rajesh" << endl;
	}
	else if(ans == 4)
	{
		cout << "Howard" << endl;
	}
	return 0;
}