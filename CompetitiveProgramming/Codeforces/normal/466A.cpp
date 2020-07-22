#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int answer = 0;
	if((float(float(b)/m) < a ) )
	{
	while(n - m > 0)
	{
		n = n - m ;
		answer += b;
	}
	if(answer +  b < answer + n*a )
	{
		answer  = answer + b;
	
	}
	else
	{
	answer += n*a;	
	}

	cout << answer << endl;
	}
	else
	{
		cout << n*a << endl;
	}
	return 0;
}