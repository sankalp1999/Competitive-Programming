#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k ;
	int r = 240 - k ;// 240 is the total number of minutes available
	int ans = 0 ;
	int count  = 0 ;
	int i = 1 ;
	
	while(ans <= r && count <= n)
	{
		ans = ans + 5*i;
		count = count +1 ;
		i++;
	}
	cout << count -1  ;
	return 0;
}