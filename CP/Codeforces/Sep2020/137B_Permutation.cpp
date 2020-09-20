#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int count[5002] = {0};
	int res = 0 ;
	for(int i = 0; i < t; i++)
	{
		int num;
		cin >> num;
		count[num]++;
		if(count[num] > 1 || num > t)
		{
			res++;
		}
	}
	cout << res << endl;
	return 0;
	
}
