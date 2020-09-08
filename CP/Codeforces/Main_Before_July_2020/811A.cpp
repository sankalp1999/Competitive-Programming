#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int k = 1;
	int i = 0;
	while(1)
	{
	if(i%2 == 0 )
	{
		if(a - k < 0)
		{
			cout << "Vladik" << endl;
			return 0;
		}
		a -= k;
	}
	else if(i%2 == 1)
	{
		if(b - k < 0)
		{
			cout << "Valera" << endl;
			return 0;
		}
		b -= k;

	}
	i++;
	k++;
	}

}